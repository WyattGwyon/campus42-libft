/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:04:53 by clouden           #+#    #+#             */
/*   Updated: 2025/05/13 18:33:37 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int ft_getsize(int *n)
{
    int tmp;
    int size;

    size = 2;
    if (*n < 0)
    {
        size++;
        *n = *n * -1;
    }
    tmp = *n;
    while (tmp >= 10)
    {
        size++;
        tmp = tmp / 10;
    }
    return (size);
}

static char *ft_ifzero(char *str)
{
    int size;

    size = 2;
    str = ft_calloc(1, size);
    str[0] = '0';
    str[1] = '\0';
    return (str);
}

static char *ft_buildstr(int n, char *str, int size)
{
    str = ft_calloc(1, size);
    size--;
    str[size] = '\0';
    while (n >= 0)
    {
        if (n == 0 && size == 0)
            return(str);
        else if (n == 0 && size == 1)
        {
            size--;
            str[size] = '-';
            return (str);
        }
        else
        {
            size--;
            str[size] = (n % 10) + '0';
            n /= 10;
        }
    }
    return (str);

}

char *ft_itoa(int n)
{
    char *str;
    int size;

    if (n == 0)
    {
        str = ft_ifzero(str);
        return (str);
    }
    size = ft_getsize(&n);
    str = ft_buildstr(n, str, size);
    return (str);
}
/*
#include <stdio.h>

int main(void)
{
    int n0 = 0;
    int n1 = -50;
    int n2 = 50;
    int n3 = 1101;
    

    printf("digit: %d\nstring: %s\n\n", n0, ft_itoa(n0));
    printf("digit: %d\nstring: %s\n\n", n1, ft_itoa(n1));
    printf("digit: %d\nstring: %s\n\n", n2, ft_itoa(n2));
    printf("digit: %d\nstring: %s\n\n", n3, ft_itoa(n3));
    return (0);
}
*/
