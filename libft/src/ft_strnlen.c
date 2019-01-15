/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 22:20:03 by yhetman           #+#    #+#             */
/*   Updated: 2018/12/01 22:20:06 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *s, size_t max_len)
{
	size_t	length;

	length = 0;
	while (length < max_len && s[length])
		length++;
	return (length);
}
