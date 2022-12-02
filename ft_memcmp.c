/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:48:39 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/02 11:23:17 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Compare les 2 zones de memoires jusqu'a n */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*buf1;
	const unsigned char	*buf2;

	buf1 = s1;
	buf2 = s2;
	if (n == 0)
		return (0);
	i = 0;
	while (buf1[i] == buf2[i] && --n)
		i++;
	return (buf1[i] - buf2[i]);
}
