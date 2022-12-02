/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:20:56 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/02 11:29:56 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copie la zone source dans dest meme si les zone se chevauche */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*bufd;
	const char	*bufs;

	bufd = dest;
	bufs = src;
	if (bufd <= bufs)				// Compare la position des pointeurs
		return (ft_memcpy(dest, src, n));	// Copie dans le sens normal
	else
	{
		while (n--)
			bufd[n] = bufs[n];		// Copie a l'envers 
							// Cette maneuvre permet de ne pas ecraser la memoir
	}
	return (dest);
}
