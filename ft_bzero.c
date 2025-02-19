/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:28:02 by ktintim-          #+#    #+#             */
/*   Updated: 2025/02/19 09:22:21 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i != n)
	{
		ptr[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*ptr;
	size_t			i;
	size_t			total_size;

	i = 0;
	total_size = num * size;
	ptr = (unsigned char *)malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
