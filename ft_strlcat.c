/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:01:11 by clouden           #+#    #+#             */
/*   Updated: 2025/05/20 16:48:10 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d_len;
	size_t	add_len;

	i = 0;
	d_len = 0;
	while (dst[d_len] && d_len < size)
	{
		d_len++;
	}
	add_len = size - d_len - 1;
	if (add_len > 0)
	{
		while (src[i] && i < add_len)
		{
			dst[d_len + i] = src[i];
			i++;
		}
		dst[d_len + i] = '\0';
	}
	return (d_len + ft_strlen(src));
}
/*
#include <stdio.h>

int main(void)
{
	char dst[10] = {'H','e','l','l','o','x','x','x','x','x'};
	char *src = "World";
	size_t size = 9;

	size_t results = ft_strlcat(dst, src, size);
	
	printf("destination: %s\n", dst);
	printf("results: %zu\n", results);
	return (0);
}
*/
