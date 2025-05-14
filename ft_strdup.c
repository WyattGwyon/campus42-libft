/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:01:38 by clouden           #+#    #+#             */
/*   Updated: 2025/05/14 23:47:40 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *copy;
    size_t  n;
    size_t  i;
    
    i = 0;
    n = ft_strlen(s1);
    copy = malloc(n + 1);
    if (copy == NULL)
        return (NULL);
    while (i < n)
    {
        copy[i] = s1[i];
        i++;
    }
    copy[n] = '\0';
    return (copy);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char *s1 = "hewwoaw weowd";

    printf("ft_strdup: %s\n", ft_strdup(s1));
    printf("strdup: %s\n", strdup(s1));
    return (0);
}
*/
