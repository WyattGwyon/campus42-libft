/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:57:14 by clouden           #+#    #+#             */
/*   Updated: 2025/05/14 23:27:37 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#ifndef LIBFT_H
#define LIBFT_H

int ft_isalpha(int c);
void *ft_memset(void *s, int c, size_t n);
size_t	ft_strlen(const char *s);
char *ft_strchr(const char *s, int c);
void *ft_calloc(size_t count, size_t size);
char *ft_itoa(int n);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
void *ft_memset(void *s, int c, size_t n);
char *ft_strdup(const char *s);
char *ft_strtrim(char const *s1, char const *set);

#endif
