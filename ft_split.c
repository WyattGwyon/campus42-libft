/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:23:22 by clouden           #+#    #+#             */
/*   Updated: 2025/05/20 18:50:52 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_cntsplits(char const *s, char dlm)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] == dlm)
		{
			if (i == 0 || s[i - 1] == dlm)
				i++;
			else
			{
				cnt++;
				i++;
			}
		}
		else if (s[i + 1] == '\0' && cnt == 0)
			return (cnt = 2);
		else
			i++;
	}
	return (cnt + 1);
}

static char	**ft_setarray(int strcnt, char const *s, char dlm)
{
	char	**array;
	char	set[2];

	set[0] = dlm;
	set[1] = '\0';
	if (strcnt == 1)
	{
		array = (char **)ft_calloc(1, sizeof(char *));
		array[0] = NULL;
		return (array);
	}
	else if (strcnt == 2)
	{
		array = (char **)ft_calloc(2, sizeof(char *));
		array[0] = ft_strtrim(s, set);
		array[1] = NULL;
		return (array);
	}
	array = (char **)ft_calloc(strcnt + 1, sizeof(char *));
	return (array);
}

static char	**ft_procbuff(char const *s, char c, char **array)
{
	char	*buff;
	int		len;
	int		ai;
	int		bi;

	ai = 0;
	bi = 0;
	len = ft_strlen(s);
	buff = (char *)ft_calloc(1, len);
	while (s[0])
	{
		if (s[0] == c && *buff == 0)
			s++;
		else if (s[0] == c && *buff != 0)
		{
			buff[bi] = '\0';
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
	free(buff);
	array[ai] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		strcnt;

	strcnt = ft_cntsplits(s, c);
	array = ft_setarray(strcnt, s, c);
	if (array == NULL)
		return (NULL);
	else if (strcnt == 1 || strcnt == 2)
		return (array);
	array = ft_procbuff(s, c, array);
	return (array);
}
/*
#include <stdio.h>

int main(void)
{
    const char *s = ",,,Hello,,World, Goodbye,,";
	const char *s1 = ",,,,,,";
	const char *s2 = "Hello World";
	const char *s3 = ",w,,";
	const char *s4 = ",4,";
  	char c = ',';  
	char **array;
    char set[2];
    set[0] = c;
    set[1] = '\0';
	
	printf("string:         %s\nnum of strings: %d\n", s, ft_cntsplits(s, c));
	printf("string:         %s\nnum of strings: %d\n", s1, ft_cntsplits(s1, c));
	printf("string:         %s\nnum of strings: %d\n", s2, ft_cntsplits(s2, c));
	printf("string:         %s\nnum of strings: %d\ntrimmed: %s\n", 
            s3, ft_cntsplits(s3, c), ft_strtrim(s3, set));
	printf("string:         %s\nnum of strings: %d\ntrimmed: %s\n\n", 
            s4, ft_cntsplits(s4, c), ft_strtrim(s4, set));


    printf("original: %s\narray of strs: ", s);
	array = ft_split(s, c);
	for (int i = 0; ; i++) 	
    {
        if (array[i] == NULL)
        {
            printf("'NULL'");
            break;
        }
        else
    	    printf("'%s' | ", array[i]);
    } 
    printf("\n----\n\n");
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);
    
    
    printf("original: %s\narray of strs: ", s1);
	array = ft_split(s1, c);
	for (int i = 0; ; i++) 	
    {
        if (array[i] == NULL)
        {
            printf("'NULL'");
            break;
        }
        else
    	    printf("'%s' | ", array[i]);
    } 
    printf("\n----\n\n");
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);   

    printf("original: %s\narray of strs: ", s2);
	array = ft_split(s2, c);
	for (int i = 0; ; i++) 	
    {
        if (array[i] == NULL)
        {
            printf("'NULL'");
            break;
        }
        else
    	    printf("'%s' | ", array[i]);
    } 
    printf("\n----\n\n");
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);

    printf("original: %s\narray of strs: ", s3);
	array = ft_split(s3, c);
	for (int i = 0; ; i++) 	
    {
        if (array[i] == NULL)
        {
            printf("'NULL'");
            break;
        }
        else
    	    printf("'%s' | ", array[i]);
    } 
    printf("\n----\n\n");
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);

    printf("original: %s\narray of strs: ", s4);
	array = ft_split(s4, c);
	for (int i = 0; ; i++) 	
    {
        if (array[i] == NULL)
        {
            printf("'NULL'");
            break;
        }
        else
    	    printf("'%s' | ", array[i]);
    } 
    printf("\n----\n\n");
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);

    return (0);
}
*/
