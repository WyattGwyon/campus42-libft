/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:38:00 by clouden           #+#    #+#             */
/*   Updated: 2025/05/14 23:52:29 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int nlen;
    int hi;
    int ni;

    nlen = ft_strlen(needle);
    hi = 0;
    ni = 0;
    if (nlen == 0)
        return ((char *)haystack);
    while ((hi + ni) < (int)len)
    {
        if (haystack[hi + ni] != needle[ni])
        {
            hi = hi + ni + 1;
            ni = 0;
            continue;
        }
        else if (haystack[hi + ni] == needle[ni] && ni < nlen)
        {
            ni++;
            if (ni == nlen)
                return((char *)haystack + hi);
            continue;
        }
    }
        return (0);    
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char *haystack = "superfinderstring";
    char *needle = "rs";
    size_t len = 12;

    printf("ft_results: %s\n", ft_strnstr(haystack, needle, len));
    printf("results: %s\n\n", strnstr(haystack, needle, len));
    
    char *haystack1 = "superfinderstring";
    char *needle1 = "rs";
    size_t len1 = 11;

    printf("ft_results: %s\n", ft_strnstr(haystack1, needle1, len1));
    printf("results: %s\n\n", strnstr(haystack1, needle1, len1));

    char *haystack2 = "superfinderstring";
    char *needle2 = "rt";
    size_t len2 = 12;

    printf("ft_results: %s\n", ft_strnstr(haystack2, needle2, len2));
    printf("results: %s\n\n", strnstr(haystack2, needle2, len2));


}
*/
