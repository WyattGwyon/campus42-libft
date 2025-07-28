/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:14:02 by clouden           #+#    #+#             */
/*   Updated: 2025/07/15 17:14:06 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_numlen(int num)
{
	int 	count;
	long	n;

	n = num;
	count = 1;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int num)
{
	char	*ascii_num;
	char	*str_num;
	int		len;
	long	n;
	
	n = num;
	ascii_num = "0123456789";
	len = ft_numlen(n);
	str_num = malloc((len + 1) * sizeof(char));
	str_num[len] = '\0';
	len--;
	if (n < 0)
	{
		str_num[0] = '-';
		n = -n;
	}
	while (!(n < 10 && n > -10))
	{
		str_num[len] = ascii_num[n % 10];
		n /= 10;
		len--;
	}
	str_num[len] = ascii_num[n % 10];
	return (str_num);
}
