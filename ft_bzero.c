/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:25:24 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/01 18:50:52 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* met toutes les cases du tableau a zero, octet par octet */

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*buf;

	buf = s;
	i = 0;
	while (i < n)
	{
		buf[i] = '\0';
		i++;
	}
}
