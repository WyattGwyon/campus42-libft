/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:51:01 by clouden           #+#    #+#             */
/*   Updated: 2025/05/18 13:24:57 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)   
{
    int sign;
    int num;

    sign = 1;
    num = 0;
    if (*str == '\0')
        return (0);
    while (*str == ' ')
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        num = num * 10 + (*str - '0');
        str++;
    }
    return (num * sign);
}
/*
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char *s0 = "1234";
    char *s1 = "   -1234";
    char *s2 = "---1234";
    char *s3 = "12c4";
    char *s4 = "123-4";

    printf("ft_atoi: %d\n", ft_atoi(s0));
    printf("atoi:    %d\n\n", atoi(s0));
    
    printf("ft_atoi: %d\n", ft_atoi(s1));
    printf("atoi:    %d\n\n", atoi(s1));
 
    printf("ft_atoi: %d\n", ft_atoi(s2));
    printf("atoi:    %d\n\n", atoi(s2));
    
    printf("ft_atoi: %d\n", ft_atoi(s3));
    printf("atoi:    %d\n\n", atoi(s3));
    
    printf("ft_atoi: %d\n", ft_atoi(s4));
    printf("atoi:    %d\n\n", atoi(s4));
    return (0);
}
*/
