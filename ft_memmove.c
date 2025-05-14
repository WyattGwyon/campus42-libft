/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:05:33 by clouden           #+#    #+#             */
/*   Updated: 2025/04/17 11:47:21 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    int     i;

    i = 0;
    if (dest > src)
        while (i <= n)
        {
            ((unsigned char *)dest)[n - i] = ((unsigned char *)src)[n - i];
            i++;
        }
    else
        while (i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    return ((void *)dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
    int ft_src[7] = {1,20,300,4000,50000,600000,7000000};
    int *ft_dest = ft_src + 2;
    int src[7] = {1,20,300,4000,50000,600000,7000000};
    int *dest = src + 2;
    int i;

    ft_memmove(ft_dest, ft_src, sizeof(int) * 7);
    memmove(dest, src, sizeof(int) * 7);
    for (i = 0; i < 7; i++)
    {
        printf("ft_dest[%d]: %d\n", i, ft_dest[i]);
        printf("dest[%d]:    %d\n", i, dest[i]);
    }
    return (0);
}
*/
