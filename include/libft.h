/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:57:14 by clouden           #+#    #+#             */
/*   Updated: 2025/05/08 14:01:47 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

int ft_isalpha(int c);
void *ft_memset(void *s, int c, size_t n);
size_t	ft_strlen(const char *s);
char *ft_strchr(const char *s, int c);
void *ft_calloc(size_t count, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
void *ft_memset(void *s, int c, size_t n);
char *ft_strdup(const char *s);

#endif
