/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:23:22 by clouden           #+#    #+#             */
/*   Updated: 2025/05/08 19:21:31 by clouden          ###   ########.fr       */
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
		else if (i + 2 == len && cnt == 0)
			return (cnt = 2);
		else
			i++;
	}
	return (cnt + 1);
}

char **ft_strsplit(char const *s, char c)
{
    char **array;
    char *buff;
    int ai;
    int bi;
	int len;
	int strcnt;
    int b_len;

    ai = 0;
	bi = 0; 
	len = ft_strlen(s);
    strcnt = ft_cntsplits(s, c, len);
	if (strcnt == 1)
	{
		array[ai] = NULL;
		return (array);
	}
	else if (strcnt == 2)
	{
		array[ai] = (char *)s;
		ai++;
		array[ai] = NULL;
		return (array);
	}	
	array = (char **)ft_calloc(strcnt + 1, sizeof(char *));
    buff = (char *)ft_calloc(1, len);
    if (array == NULL)
        return (NULL);
    while (s[0])
    {
        if (s[0] == c && *buff == 0)
            s++;
        else if (s[0] == c && *buff != 0)
        {
            buff[bi] = '\0';
            b_len = ft_strlen(buff) + 1;
			array[ai] = ft_strdup(buff);
            ft_memset(buff, 0, len);
            s++;
            bi = 0;
            ai++;
        }
        else
        {
            buff[bi] = s[0];
            bi++;
            s++;
        }
    }
    array[ai] = NULL;
    return(array);
}

#include <stdio.h>

int main(void)
{
    const char *s = ",,,Hello,,World, Goodbye,,";
	const char *s1 = ",,,,,,";
	const char *s2 = "Hello World";
  	char c = ',';  
	size_t len = ft_strlen(s);
	size_t len1 = ft_strlen(s1);
	char **array;
	
	printf("original: %s, num of strings: %d\n", s, ft_cntsplits(s, c, len));
	printf("original: %s, num of strings: %d\n", s1, ft_cntsplits(s1, c, len));

    printf("original: %s\narray of strs: ", s);
	array = ft_strsplit(s, c);
	for (int i = 0; array[i] != NULL; i++) 
	
    	printf("'%s' , ", array[i]);
		
	printf("\n----\n");
	
    printf("original: %s\narray of strs: ", s1);
	array = ft_strsplit(s1, c);
	for (int i = 0; array[i] != NULL; i++) 
	
    	printf("'%s' , ", array[i]);
		
	printf("\n----\n");
	
    printf("original: %s\narray of strs: ", s2);
	array = ft_strsplit(s2, c);
	for (int i = 0; array[i] != NULL; i++) 
	
    	printf("'%s' , ", array[i]);
		
	printf("\n----\n");
	return (0);
}
