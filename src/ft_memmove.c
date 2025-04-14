/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:05:33 by clouden           #+#    #+#             */
/*   Updated: 2025/04/14 13:32:50 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>


#include <stdio.h>
#include <stddef.h>

int	main(void)
{
	int array[] = {1,2,4,3,5,6,};
	int *a_1 = &array[2];
	int *a_2 = &array[5];
	int i = 0;

	while (i < sizeof(a_1))
	{
		printf("%d\n",a_1[i]);
		i++;
	}
	printf("\n");	
	i = 0;
	while (i < sizeof(a_2))
	{
		printf("%d\n",a_2[i]);
		i++;
	}
	return (0);
}
