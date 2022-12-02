/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:33:37 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/01 18:47:49 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* converti une chaine en int */

int	ft_atoi(const char *nptr)
{
	int		i;
	int		signe;
	long	nbr;

	i = 0;
	signe = 1;
	nbr = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32) /* passe les espaces */
		i++;
	if (nptr[i] == '-' || nptr[i] == '+') /* verifie le signe */
	{
		if (nptr[i] == '-')
			signe *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9') /* convertie la chaine de chiffre en int */
	{
		nbr = nbr * 10 + (nptr[i] - 48);
		i++;
	}
	return (nbr * signe); /* revoie un int negatif ou positif */
}
