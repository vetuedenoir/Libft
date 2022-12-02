/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:15:48 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/02 16:44:21 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copie len caractere de s a partir de l'index start */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;
	size_t		t;

	if (!s)
		return (NULL);
	t = ft_strlen(s);
	if (start > t)				// start ne peut pas commencer apres \0
		start = t;
	if ((size_t)start + len > t)		// Ce qu'on copie ne doit pas d'epasser \0
		len = t - start;
	i = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (i < len && s[i + start])		// Copie a partir de start len caractere dans la nouvelle chaine
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
