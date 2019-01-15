/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 17:20:32 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/27 17:31:23 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		j;
	char	*s;

	s = (char *)str;
	if (ch < 0)
		ch = ch + 256;
	if (ch > 255)
		ch = ch - 256;
	j = -1;
	while (s[++j])
		;
	while (j >= 0)
	{
		if (s[j] == ch)
			return (&s[j]);
		j--;
	}
	return (NULL);
}
