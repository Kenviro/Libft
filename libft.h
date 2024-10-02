/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:37:30 by ktintim-          #+#    #+#             */
/*   Updated: 2024/10/02 17:37:35 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>
# include <unistd.h>

int				ft_atoi(char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_strlen(char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_toupper(char c);
int				ft_tolower(char c);
void			*ft_memset(void *ptr, int c, size_t len);
void			*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void			*ft_memove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
void			bzero(void *s, size_t n);
void			*calloc(size_t num, size_t size);
char			*ft_strnstr(char *str, char *to_find, int n);
char			*ft_strdup(char *src);
char			*ft_strchr(char *str, char c);
char			*ft_strrchr(char *str, char c);
unsigned int	ft_strlcat(char *src, char *dest, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

#endif
