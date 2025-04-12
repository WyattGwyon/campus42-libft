/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:19:40 by clouden           #+#    #+#             */
/*   Updated: 2025/04/12 14:56:32 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stddef.h>
#include <"libft.h">

void ft_bzero(void *s, size_t n)
{
	return (ft_memset(s, '\0', n));	
}
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char array[5] = "Hola";
	int n = 2;

	printf("bzero\n");
	printf("before array[0]: %c\n", array[0]);
	printf("before array[1]: %c\n", array[1]);
	printf("before array[2]: %c\n", array[2]);
	printf("before array[3]: %d\n", array[3]);
	bzero(array, n);	
	printf("after array[0]: %c\n", array[0]);
	printf("after array[1]: %c\n", array[1]);
	printf("before array[2]: %c\n", array[2]);
	printf("before array[3]: %d\n", array[3]);
	return (0);	
}
