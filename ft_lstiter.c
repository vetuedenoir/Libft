/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:06:26 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/01 19:40:44 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Applique la fonction f sur le contenue de l'element */

void	ft_lstiter(t_list *lst, void (*f) (void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
