/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:34:27 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/02 11:32:18 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Remplace n bits par la valeur c */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*buffer;

	buffer = s;
	i = 0;
	while (i < n)
	{
		buffer[i] = c;
		i++;
	}
	return (s);
}
