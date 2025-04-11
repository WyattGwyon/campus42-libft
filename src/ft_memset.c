/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:30:14 by clouden           #+#    #+#             */
/*   Updated: 2025/04/11 21:58:38 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/
void	*ft_memset(void *s, int c, size_t n)
{
	byte	i;
	unsigned char *p;

	i = 0;
	*p = (unsigned char *)s;	
	while (n != 0)
	{
		p[i] = (unsigned char)c;
		i++;
		n--;
	}
	return ((void *)p);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
	int array[] = {256, 4, 2};
	int c = 2;
	
	printf("antes array[0]: %d\n", array[0]);
	printf("antes array[1]: %d\n", array[1]);
	memset(array, c, 5);
	printf("despues array[0]: %d\n", array[0]);
	printf("despues array[1]: %d\n", array[1]);
	return (0);
}


// char -> 1 byte
// int  -> 4 byte
