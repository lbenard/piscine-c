/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 01:45:08 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/11 14:17:21 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int		ft_wordlen(char *word)
{
	int	i;

	i = 0;
	while (!ft_is_separator(word[i]))
		i++;
	return (i);
}

char	**ft_create_words_array(char *str, int *words_count)
{
	int	i;

	i = -1;
	*words_count = 0;
	while (42 && str[++i])
		if (!ft_is_separator(str[i]))
		{
			if (i == 0)
				(*words_count)++;
			else if (ft_is_separator(str[i - 1]))
				(*words_count)++;
		}
	return ((char**)malloc(sizeof(char*) * (*words_count + 1)));
}

char	*ft_create_string_at_pos(char *str, int pos)
{
	char	*word;
	int		length;
	int		i;

	length = ft_wordlen(&str[pos]);
	word = (char*)malloc(sizeof(char) * (length + 1));
	i = -1;
	while (++i < length)
		word[i] = str[pos + i];
	word[length] = '\0';
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		words_count;
	char	**words;

	words = ft_create_words_array(str, &words_count);
	i = 0;
	j = 0;
	while (i < words_count)
	{
		while (ft_is_separator(str[j]))
			j++;
		words[i] = ft_create_string_at_pos(str, j);
		while (!ft_is_separator(str[j]))
			j++;
		i++;
	}
	words[words_count] = (char*)0;
	return (words);
}
