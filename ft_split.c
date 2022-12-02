/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:55:43 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/02 16:49:28 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/* Decoupe la chaine envoyer en parametre en plusieur sous chaine en foncton du
   caractere separateur */

static int	lents(const char *str, char c)	// Calcule le nombre de sous chaine a creer
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			t++;
		i++;
	}
	return (t);
}

static char	*cpy_tsx(const char *s, int index, char c)	// Copie chaque 'Mots' dans sa sous chaine
{
	int		i;
	int		t;
	char	*str;

	i = index;
	t = 0;
	while (s[i] != c && s[i])				// Calcule la taille du mots
	{
		t++;
		i++;
	}
	str = malloc(sizeof(char) * (t + 1));			// Malloc la sous chaine
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[index] != c && s[index])			// Copie le mots dans la sous chaine
	{
		str[i] = s[index];
		i++;
		index++;
	}
	str[i] = '\0';
	return (str);
}

static void	*free_all(char **ts, int x)			// Fonction qui free le tableaux de chaine et ses sous chaine
{
	while (x-- >= 0)					// si une erreur s'est produit
		free(ts[x]);
	free(ts);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ts;
	int		x;
	int		i;

	i = 0;
	x = 0;
	if (!s)
		return (NULL);
	ts = malloc(sizeof(char *) * (lents(s, c) + 1));	// Malloc le tableau de chaine a la bonne taille
	if (ts == NULL)
		return (NULL);
	while (i < (int)ft_strlen(s))				// Creer et copie toutes les sous chaine temps que s existe
	{
		if (s[i] != c && s[i])
		{
			ts[x] = cpy_tsx(s, i, c);
			if (ts[x] == NULL)
				return (free_all(ts, x));
			i += ft_strlen(ts[x]);
			x++;
		}
		i++;
	}
	ts[x] = 0;						// La derniere chaine du tableau est NULL
	return (ts);
}
