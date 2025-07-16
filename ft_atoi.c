/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:56:51 by clouden           #+#    #+#             */
/*   Updated: 2025/07/15 15:56:55 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_isspace(int c)
{
    if (c == ' ' || (c >= '\t' && c <= '\r'))
        return (1);
    return (0);
}

int ft_atoi(const char *str)
{
    int sign;
    int number;

    sign = 1;
    number = 0;
    if (!str)
        return (0);
    while (ft_isspace(str[0]) || str[0] == '+')
        str++;
    if (str[0] == '-')
    {    
        sign = -1;
        str++;
    }
    while (ft_isdigit(str[0]))
    {
        number *= 10;
        number += str[0] - '0';
		str++;
    }
    return (sign * number);
}
