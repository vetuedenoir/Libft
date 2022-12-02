/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:36:26 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/02 16:35:39 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Enleve tout les caractere du set au debut et a la fin de chaine */

static int	checkchar(char c, char const *set)	// Renvoie 1 si le caractere fait partie de set
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, char const *set)
{
	size_t	len;
	size_t	av;
	size_t	i;
	char	*str;

	av = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (checkchar(s1[av], set) && s1)		// incremente av pour chaque caracter du set trouver
		av++;
	len = ft_strlen(s1);
	while (checkchar(s1[len - 1], set) && av < len)	// Decremente la taille pour chaque caracter du set trouver
		len--;
	str = malloc(sizeof(char) * (len - av + 1));	// Malloc la difference entre len et av
	if (!str)
		return (NULL);
	while (av < len)
		str[i++] = s1[av++];			// Copie la chaine trimer dans la nouvelle
	str[i] = '\0';
	return (str);
}
