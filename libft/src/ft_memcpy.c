/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 18:11:04 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/25 17:36:50 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*srce;
	size_t			j;

	j = 0;
	dest = (unsigned char*)str1;
	srce = (unsigned char*)str2;
	while (n > j)
	{
		dest[j] = srce[j];
		j++;
	}
	return (dest);
}
