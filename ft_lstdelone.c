/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:05:02 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/01 19:36:34 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Suprime l'element envoyer */

void	ft_lstdelone(t_list *lst, void (*del) (void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}
