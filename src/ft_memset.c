/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:30:14 by clouden           #+#    #+#             */
/*   Updated: 2025/04/14 18:57:15 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;
	unsigned char *bytes;
	unsigned char b;

	i = 0;
	bytes = (unsigned char *)s;
	b = (unsigned char)c;
	while (i + 8 < n)
	{
		bytes[i] = \
		bytes[i + 1] = \
		bytes[i + 2] = \
		bytes[i + 3] = \
		bytes[i + 4] = \
		bytes[i + 5] = \
		bytes[i + 6] = \
		bytes[i + 7] = b;
		i += 8;
	}
	while (i < n)
	{
		bytes[i] = b;
		i++;
	}
	return ((void *)s);
}


#include <string.h>
#include <stdio.h>

int main(void)
{
	int ft_array[] = {2147483647, 260, 2, 40000, 3000000, 2};
	int array[] = {2147483647, 260, 2, 40000, 3000000, 2};
	int c = 0;
	int n = 17;
	
	printf("ft_memset\n");
	printf("antes array[0]: %d\n", ft_array[0]);
	printf("antes array[1]: %d\n", ft_array[1]);
	printf("antes array[2]: %d\n", ft_array[2]);
	printf("antes array[3]: %d\n", ft_array[3]);
	printf("antes array[4]: %d\n", ft_array[4]);
	ft_memset(ft_array, c, n);
	printf("despues array[0]: %d\n", ft_array[0]);
	printf("despues array[1]: %d\n", ft_array[1]);
	printf("despues array[2]: %d\n", ft_array[2]);
	printf("despues array[3]: %d\n", ft_array[3]);
	printf("despues array[4]: %d\n\n", ft_array[4]);

	printf("memset\n");
	printf("antes array[0]: %d\n", array[0]);
	printf("antes array[1]: %d\n", array[1]);
	printf("antes array[2]: %d\n", array[2]);
	printf("antes array[3]: %d\n", array[3]);
	printf("antes array[4]: %d\n", array[4]);
	memset(array, c, n);
	printf("despues array[0]: %d\n", array[0]);
	printf("despues array[1]: %d\n", array[1]);
	printf("despues array[2]: %d\n", array[2]);
	printf("despues array[3]: %d\n", array[3]);
	printf("despues array[4]: %d\n", array[4]);


	return (0);
}

