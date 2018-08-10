/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 17:59:59 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/11 18:06:49 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_separator(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (c == charset[i])
			return (1);
	return (0);
}

int		ft_wordlen(char *word, char *charset)
{
	int	i;

	i = 0;
	while (!ft_is_separator(word[i], charset))
		i++;
	return (i);
}

char	**ft_create_words_array(char *str, int *words_count, char *charset)
{
	int	i;

	i = -1;
	*words_count = 0;
	while (42 && str[++i])
		if (!ft_is_separator(str[i], charset))
		{
			if (i == 0)
				(*words_count)++;
			else if (ft_is_separator(str[i - 1], charset))
				(*words_count)++;
		}
	return ((char**)malloc(sizeof(char*) * (*words_count + 1)));
}

char	*ft_create_string_at_pos(char *str, int pos, char *charset)
{
	char	*word;
	int		length;
	int		i;

	length = ft_wordlen(&str[pos], charset);
	word = (char*)malloc(sizeof(char) * (length + 1));
	i = -1;
	while (++i < length)
		word[i] = str[pos + i];
	word[length] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		words_count;
	char	**words;

	words = ft_create_words_array(str, &words_count, charset);
	i = 0;
	j = 0;
	while (i < words_count)
	{
		while (ft_is_separator(str[j], charset))
			j++;
		words[i] = ft_create_string_at_pos(str, j, charset);
		while (!ft_is_separator(str[j], charset))
			j++;
		i++;
	}
	words[words_count] = (char*)0;
	return (words);
}
