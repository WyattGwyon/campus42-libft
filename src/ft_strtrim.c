/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 11:26:16 by clouden           #+#    #+#             */
/*   Updated: 2025/05/06 09:31:43 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

static int ft_isnset(char c, const char *set)
{
    int i;

    i = 0;
    while (set[i] != '\0')
    {
        if (c == set[i])
            return(1);
        else
            i++;
    }
    return (0); 
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *new;
    size_t start;
    size_t end;
    size_t newidx;
    
    start = 0;
    end = ft_strlen(s1);
    while (ft_isnset(s1[start], set) && start < end)
        start++;
    while (ft_isnset(s1[end - 1], set) && start < end)
        end--;
    new = malloc(end - start);
    if (new == NULL)
        return (NULL);
    newidx = 0;
    while ((start + newidx) < end)
    {
        new[newidx] = s1[start + newidx];
        newidx++;
    }
    new[newidx] = '\0';
    return (new);
}

#include <stdio.h>

int main(void)
{
    char *s1 = "xzxHelloxzxxz";
    char *set = "zx";
    char *s2 = "xzxxzxxz";
    
    printf("orig: %s\nnew: %s\n\n", s1, ft_strtrim(s1, set));
    printf("orig: %s\nnew: %s\n\n", s1, ft_strtrim(s2, set));  
    return (0);
}
