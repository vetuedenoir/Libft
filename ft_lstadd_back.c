/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:03:16 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/01 19:29:48 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Ajoute un nouvelle element a la fin de la liste */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);		// Positionement en fin de liste
	if (!last)
		*lst = new;			// Si la la liste n existe pas l element devient la liste
	else
		last->next = new;		// Sinon on l'inclue a la fin
}
