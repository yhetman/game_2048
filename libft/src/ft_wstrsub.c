/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrsub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 14:06:21 by yhetman           #+#    #+#             */
/*   Updated: 2018/12/27 14:06:45 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t	*ft_wstrsub(wchar_t const *s, unsigned int begin, size_t len)
{
	wchar_t	*str;

	if (!s)
		return ((wchar_t *)s);
	str = (wchar_t *)malloc(sizeof(wchar_t) * (len + 1));
	if (!str)
		return (NULL);
	while (begin--)
		s++;
	ft_wstrncpy(str, s, len);
	str[len] = '\0';
	return (str);
}
