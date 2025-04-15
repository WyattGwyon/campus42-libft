/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:05:33 by clouden           #+#    #+#             */
/*   Updated: 2025/04/15 19:19:24 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	void	*buffer;

	
}

#include <stdio.h>
#include <stddef.h>

int	main(void)
{
	int array[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int *src = &array[2];
	int *dest = &array[5];
	int i = 0;
	int n = 3;

	printf("size of src: %lu\n", sizeof(src));
	while (i < sizeof(src))
	{
		printf("%d\n",src[i]);
		i++;
	}
	printf("\n");
	printf("size of dest: %lu\n", sizeof(dest));	
	i = 0;
	while (i < sizeof(dest))
	{
		printf("%d\n",dest[i]);
		i++;
	}
	printf("\n");
	memmove(dest, src, n);
	i = 0;
	while (i < )
	{
		printf("%d\n",array[i]);
		i++;
	}
	return (0);
}
