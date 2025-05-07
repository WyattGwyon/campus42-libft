/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:23:22 by clouden           #+#    #+#             */
/*   Updated: 2025/05/07 12:44:29 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

static int ft_cntsplits(char const *s, char dlm, size_t len)
{
	int i;
	int cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] == dlm)
		{
			if (i == 0 || s[i - 1] == dlm || i + 2 == len)
				i++;
			else
			{
				cnt++;
				i++;
			}
		}
		i++;
	}
	return (cnt + 1);
}

char **ft_split(char const *s, char c)
{
    char **array;
    //char *new;
    int i;
	int len;
	int strcnt;

    i = 0;
	len = ft_strlen(s);
    strcnt = ft_cntsplits(s, c, len);
	array = ft_calloc(strcnt, sizeof(char *));
    while (s[i])
    {
        i++;
    }
    return(array);
}

#include <stdio.h>

int main(void)
{
    const char *s = ",,,Hello,,World, Goodbye,,";
	const char *s1 = "Hello,World, Goodbye";
  	char c = ',';  
	size_t len = ft_strlen(s);
	size_t len1 = ft_strlen(s1);
	printf("original: %s, num of strings: %d\n", s, ft_cntsplits(s, c, len));
	printf("original: %s, num of strings: %d\n", s1, ft_cntsplits(s1, c, len));

    return (0);
}
