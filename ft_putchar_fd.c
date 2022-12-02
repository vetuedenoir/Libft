/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:53:58 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/02 11:34:38 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* Ecrit un caractere dans le descripteur de fichier indique */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
