/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:41:51 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/02 11:25:31 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copie la zone memoire de src dans dest , les zones ne doivent pas se chevaucher */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*bufd;
	const char	*bufs;

	bufd = (char *)dest;
	bufs = (char *)src;
	i = 0;
	if (!n || dest == src)
		return (dest);
	while (i < n)
	{
		bufd[i] = bufs[i];
		i++;
	}
	return (dest);
}
