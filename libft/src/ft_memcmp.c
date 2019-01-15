/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 19:31:08 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/27 19:34:54 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	i = -1;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if (n == 0)
		return (0);
	while (++i < n)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}
