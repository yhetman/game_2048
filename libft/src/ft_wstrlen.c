/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 21:05:44 by yhetman           #+#    #+#             */
/*   Updated: 2018/12/29 21:04:29 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wcharlen(unsigned wc)
{
	if (wc < 0x80)
		return (1);
	else if (wc < 0x800)
		return (2);
	else if (wc < 0x10000)
		return (3);
	return (4);
}

size_t	ft_wstrlen(unsigned *s)
{
	size_t	len;

	len = 0;
	while (*s != '\0')
	{
		len += ft_wcharlen(*s);
		++s;
	}
	return (len);
}
