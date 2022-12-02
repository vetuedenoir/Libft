/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:52:28 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/02 12:43:38 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

/* Applique la fonction f sur tout les caracteres dela chaine */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!f || !s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
