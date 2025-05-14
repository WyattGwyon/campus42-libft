/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:25:13 by clouden           #+#    #+#             */
/*   Updated: 2025/05/02 19:44:04 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    char i;

    sub = malloc(len + 1);
    if (sub == NULL)
        return (NULL);
    i = 0;
    while (i < len)
    {
        sub[i] = s[start + i];
        i++;
    }
    return (sub);
}
/*
#include <stdio.h>

int main(void)
{
    char *s = "Hello World";
    unsigned int start = 4;
    size_t len = 5;

    printf("string: %s, substr: %s\n", s, ft_substr(s, start, len));
    
    len = -2;
    printf("string: %s, substr: %s\n", s, ft_substr(s, start, len));
    return (0);
}
*/
