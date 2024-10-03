/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:49:28 by ktintim-          #+#    #+#             */
/*   Updated: 2024/10/03 13:49:30 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	nb_sep(char const *str, char sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == sep)
			j++;
		i++;
	}
	j++;
	return (j);
}

char	*ft_word_dup(char const *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		index;

	i = -1;
	j = 0;
	index = -1;
	if (!s)
		return (NULL);
	result = (char **)malloc((nb_sep(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			result[j++] = ft_word_dup(s, index, i);
			index = -1;
		}
	}
	result[j] = 0;
	return (result);
}
