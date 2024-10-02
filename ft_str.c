/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:46:49 by ktintim-          #+#    #+#             */
/*   Updated: 2024/10/01 14:46:51 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

char	*ft_strnstr(char *str, char *to_find, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] && i <= n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i + j) < n && to_find[j] != '\0')
			j++;
		if (*to_find == '\0')
			return (&str[i]);
	}
	return (0);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = -1;
	while (src[i])
		i++;
	dest = (char *)malloc((i + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (src[++j])
		dest[j] = src[j];
	dest[j] = '\0';
	return (dest);
}
