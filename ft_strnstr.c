/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:59:41 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/02 15:28:59 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Renvoie un pointeur sur la premiere occurence de little dans Big */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && i < len)				// Verifie jusqu'au n'em caractere
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j]	// Si les caracteres des 2 chaines corespondent
			&& little[j] && i + j < len)		// On incremente jusqu'a trouver little en entier
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);	// Sinon on repart de la ou on en etai
		}
		i++;
	}
	return (NULL);
}
