/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:57:14 by clouden           #+#    #+#             */
/*   Updated: 2025/05/06 12:26:18 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

int ft_isalpha(int c);
void *ft_memset(void *s, int c, size_t n);
size_t	ft_strlen(const char *s);
char *ft_strchr(const char *s, int c);
void *ft_calloc(size_t count, size_t size);

#endif
