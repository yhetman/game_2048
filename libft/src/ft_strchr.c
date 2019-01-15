/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 14:15:16 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/27 14:15:21 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		j;
	char	*str;

	str = (char *)s;
	if (c < 0)
		c = c + 256;
	if (c > 255)
		c = c - 256;
	j = -1;
	while (str[++j])
		if (str[j] == c)
			return (&str[j]);
	if (str[j] == c)
		return (&str[j]);
	return (NULL);
}
