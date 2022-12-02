/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:40:19 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/01 19:21:52 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Convertie un int en chaine de caractere */

static void	ft_signe(long *nb, int *signe, int *t) // Definie le signe et change la taille a malloc
{
	if (*nb < 0)
	{
		*signe = -1;
		*t = *t + 1;
		*nb = *nb * -1;
	}
	else
		*signe = 1;
}

static void	lennb(long nb, int *t) // Calcule la taille a malloc
{
	if (nb == 0)
		*t = *t + 1;
	else
	{
		while (nb != 0)
		{
			nb /= 10;
			*t = *t + 1;
		}
	}
}

char	*ft_itoa(int n)
{
	int		t;
	int		signe;
	long	nb;
	char	*str;

	t = 0;
	nb = n;
	ft_signe(&nb, &signe, &t);
	lennb(nb, &t);
	str = malloc(sizeof(char) * (t + 1));
	if (str == NULL)
		return (NULL);
	str[t] = '\0';
	while (t > 0)			// copie chaque chiffre en partant de la fin 
	{
		t--;
		str[t] = nb % 10 + 48;
		nb /= 10;
	}
	if (signe == -1)		// ajoute le signe moins au debut si necesaire
		str[t] = '-';
	return (str);
}
