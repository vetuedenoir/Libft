/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:49:17 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/02 15:14:56 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Creer une version modifier par f, de la chaine passer en parametre */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				t;
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	t = ft_strlen(s);
	str = malloc(sizeof(char) * (t + 1));	// Malloc la meme taille que s	
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);		// Copie la modification dans la nouvelle chaine
		i++;
	}
	str[i] = '\0';
	return (str);
}	
