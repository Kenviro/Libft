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

void	ft_free_all(char **result, int words_allocated)
{
	int	i;

	i = 0;
	while (i < words_allocated)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

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
	if (j != 0)
		j++;
	return (j);
}

char	*ft_word_dup(char const *str, int *i[2], int finish)
{
	char	*word;
	int		j;

	j = 0;
	word = (char *)malloc((finish - *i[2] + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (*i[2] < finish)
		word[j++] = str[*i[2]++];
	word[j] = '\0';
	i[2] = -1;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		*i[3];

	i[0] = -1;
	i[1] = 0;
	i[2] = -1;
	(!s || !(result = (char **)malloc((nb_sep(s, c) + 1) * sizeof(char *))))
	return (NULL);
	while (++i[0] <= ft_strlen(s))
	{
		if (s[i[0]] != c && i[2] < 0)
			i[2] = i[0];
		else if ((s[i[0]] == c || i[0] == ft_strlen(s)) && i[2] >= 0)
		{
			result[i[1]++] = ft_word_dup(s, *i[2], i[0]);
			if (!result[i[1]])
			{
				ft_free_all(result, i[1]);
				return (NULL);
			}
		}
	}
	result[i[1]] = 0;
	return (result);
}
