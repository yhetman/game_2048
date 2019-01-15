/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 19:01:07 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/25 19:01:14 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*temp;
	size_t			j;

	j = -1;
	temp = (unsigned char *)arr;
	while (++j < n)
		if (temp[j] == (unsigned char)c)
			return (temp + j);
	return (NULL);
}
