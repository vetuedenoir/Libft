/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:07:41 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/01 19:45:25 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Creer une nouvelle liste resultant des aplications de f */

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void*))
{
	t_list	*newlist;
	t_list	*nelem;

	newlist = NULL;
	while (lst)
	{
		nelem = ft_lstnew(f(lst->content));	// Creer le nouvelle element
		if (!nelem)				// Suprime la nouvelle liste si une erreurs s'est produite
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, nelem);	// Ajoute l'element a la fin de la liste
		lst = lst->next;
	}
	return (newlist);
}
