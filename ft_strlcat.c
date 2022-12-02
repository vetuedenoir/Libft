/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:47:30 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/02 14:34:01 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* la fonction concatene les 2 chaines si la taille a copier passe dans la dest */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));		// On retourne la taille que Dest devrait faire pour copier la source
	len = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && len + 1 < size)	// On copie la source a la fin de Dest 
	{
		dst[len] = src[i];
		len++;
		i++;
	}
	dst[len] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));	// Retourne la taille que l'on a essayer de creer
}
