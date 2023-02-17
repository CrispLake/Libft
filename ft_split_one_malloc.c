/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_one_malloc.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:08:51 by emajuri           #+#    #+#             */
/*   Updated: 2023/02/17 15:17:15 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*strlen_delim(const char *str, int *full_len, int delim)
{
	while (*str != delim && *str)
	{
		str++;
		(*full_len)++;
	}
	return (str);
}

int	word_count(const char *str, int *full_len, int delim)
{
	int	count;

	count = 0;
	*full_len = 0;
	while (*str)
	{
		while (*str == delim)
			str++;
		if (*str)
			count++;
		str = strlen_delim(str, full_len, delim);
	}
	return (count);
}

void	write_data(const char *str, char **ptr, int words, int delim)
{
	char	*tmp;
	int		i;
	int		strlen;

	tmp = (char *)(ptr + words);
	i = 0;
	while (words-- > 1)
	{
		ptr[i] = tmp;
		strlen = 0;
		while (*str == delim)
			str++;
		strlen_delim(str, &strlen, delim);
		ft_strlcpy(ptr[i++], str, strlen + 1);
		if (*str == '\"' || *str == '\'')
			str++;
		str += strlen + 1;
		tmp += strlen + 1;
	}
	ptr[i] = NULL;
}

char	**ft_split_one_malloc(const char *str, int delim)
{
	char	**ptr;
	int		full_len;
	int		words;

	words = (word_count(str, &full_len, delim) + 1);
	ptr = ft_calloc(words * sizeof(char *) + \
			((words - 1) + full_len) * sizeof(char), 1);
	if (!ptr)
		return (NULL);
	write_data(str, ptr, words, delim);
	return (ptr);
}
