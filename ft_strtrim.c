/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 11:26:16 by clouden           #+#    #+#             */
/*   Updated: 2025/05/06 16:51:28 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

typedef struct s_trim
{
    char *new;
    int start;
    int len;
    int newidx;
}       t_trim;
    

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
    t_trim t;
    
    t.start = 0;
    t.len = ft_strlen(s1);
    while (ft_isnset(s1[t.start], set) && t.start < t.len)
        t.start++;
    while (ft_isnset(s1[t.len - 1], set) && t.start < t.len)
        t.len--;
	if (t.len - t.start <= 0)
		return (0);
    t.new = (char *)ft_calloc(t.len - t.start + 1, sizeof(char));
    if (!t.new)
        return (NULL);
    t.newidx = 0;
    while ((t.start + t.newidx) < t.len)
    {
        t.new[t.newidx] = s1[t.start + t.newidx];
        t.newidx++;
    }
    return (t.new);
}
/*
#include <stdio.h>

int main(void)
{
    char *s1 = "xzxHelloxzxxz";
    char *set = "zx";
    char *s2 = "xzxxzxxz";
    char *s3 = "xzxxlzxxz";
    
    printf("orig: %s\nnew: %s\n\n", s1, ft_strtrim(s1, set));
    printf("orig: %s\nnew: %s\n\n", s2, ft_strtrim(s2, set));  
    printf("orig: %s\nnew: %s\n\n", s3, ft_strtrim(s3, set));  
    return (0);
}
*/
