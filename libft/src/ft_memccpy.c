/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 18:15:32 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/25 18:15:36 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	char			*dest;
	unsigned char	*str;

	i = -1;
	dest = dst;
	str = (unsigned char *)src;
	while (++i < n)
	{
		dest[i] = str[i];
		if (str[i] == (unsigned char)c)
			return (&dest[i + 1]);
	}
	return (NULL);
}
