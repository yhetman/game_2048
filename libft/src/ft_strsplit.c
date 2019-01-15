/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:46:27 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/30 17:28:54 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	define_word(char const *s, char c, unsigned int i)
{
	unsigned int length;

	length = 0;
	while (s[i] && s[i] != c)
	{
		++length;
		++i;
	}
	return (length);
}

static int	number_of_words(char const *s, char c)
{
	unsigned int words;

	words = 0;
	while (*s)
	{
		if (*s == c)
			++s;
		else
		{
			++words;
			while (*s && *s != c)
				++s;
		}
	}
	return (words);
}

char		**ft_strsplit(char const *s, char c)
{
	char			**splited_str;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (!(splited_str = (char **)malloc(sizeof(char *) *
		(number_of_words(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!(splited_str[j++] = ft_strsub(s, i, define_word(s, c, i))))
				return (NULL);
			i += define_word(s, c, i);
		}
		else
			i++;
	}
	splited_str[j] = NULL;
	return (splited_str);
}
