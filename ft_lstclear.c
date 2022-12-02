/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:04:21 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/01 19:34:49 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Suprime le contenue et libere la memoir de tout les elements de la chaine */

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;		// Sauvegarde du prochain pointeur
		ft_lstdelone(*lst, del);	// Suprime l'element
		*lst = tmp;
	}
}
