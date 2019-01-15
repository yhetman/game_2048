/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrncpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 14:06:02 by yhetman           #+#    #+#             */
/*   Updated: 2018/12/29 18:12:35 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t	*ft_wstrncpy(wchar_t *dest, const wchar_t *src, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] && ((j + ft_wcharlen(src[i])) <= n))
	{
		dest[i] = src[i];
		j += ft_wcharlen(src[i]);
		i++;
	}
	while (j < n)
	{
		dest[i] = '\0';
		j += ft_wcharlen(src[i]);
		i++;
	}
	return (dest);
}
