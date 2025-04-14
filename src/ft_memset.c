/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:30:14 by clouden           #+#    #+#             */
/*   Updated: 2025/04/14 12:03:33 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (n > i)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return ((void *)s);
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	int ft_array[] = {2147483647, 260, 2};
	int array[] = {2147483647, 260, 2};
	int c = 0;
	int n = 2;
	
	printf("ft_memset\n");
	printf("antes array[0]: %d\n", ft_array[0]);
	printf("antes array[1]: %d\n", ft_array[1]);
	ft_memset(ft_array, c, n);
	printf("despues array[0]: %d\n", ft_array[0]);
	printf("despues array[1]: %d\n\n", ft_array[1]);

	printf("memset\n");
	printf("antes array[0]: %d\n", array[0]);
	printf("antes array[1]: %d\n", array[1]);
	memset(array, c, n);
	printf("despues array[0]: %d\n", array[0]);
	printf("despues array[1]: %d\n", array[1]);


	return (0);
}
*/
