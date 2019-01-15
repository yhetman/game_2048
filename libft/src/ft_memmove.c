/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 18:34:35 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/25 18:34:37 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	unsigned char	*dest;
	unsigned char	*srce;
	size_t			j;

	j = 0;
	dest = (unsigned char*)destination;
	srce = (unsigned char*)source;
	if (dest > srce)
	{
		while (n)
		{
			dest[n - 1] = srce[n - 1];
			n--;
		}
	}
	else
	{
		while (n > j)
		{
			dest[j] = srce[j];
			j++;
		}
	}
	return (dest);
}
