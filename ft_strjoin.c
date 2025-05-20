/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:48:17 by clouden           #+#    #+#             */
/*   Updated: 2025/05/20 18:18:42 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new;
	size_t			len1;
	size_t			len2;
	unsigned char	i;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new = (char *)ft_calloc(1, len1 + len2);
	if (new == NULL)
		return (NULL);
	while (i < len1)
	{
		new[i] = s1[i];
		i++;
	}
	while (i - len1 < len2)
	{
		new[i] = s2[i - len1];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
#include <stdio.h>

int main(void)
{
    char *s1 = "hello";
    char *s2 = "world";

    printf("new string %s", ft_strjoin(s1,s2));
    return (0);
}
*/
