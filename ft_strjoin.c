/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:41:19 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/02 12:48:38 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Creer une nouvelle chaine qui comprend s1 et s2 a la suite */

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		t;
	int		i;
	int		p;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	p = 0;
	t = ft_strlen(s1) + ft_strlen(s2);	// Aditionne la len des 2 chaines
	str = malloc(sizeof(char) * (t + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i])				// Copie s1
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[p])				// Puis s2 a la suite
	{
		str[i + p] = s2[p];
		p++;
	}
	str[i + p] = '\0';
	return (str);
}
