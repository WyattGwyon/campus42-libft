/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 23:13:47 by clouden           #+#    #+#             */
/*   Updated: 2025/05/21 12:59:32 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;
	int		len;

	s = ft_itoa(n);
	len = ft_strlen(s);
	write(fd, s, len);
}
/*
#include <stdio.h>

int main(void)
{
    int n = -2147483648;

    ft_putnbr_fd(n, 1);
}
*/
