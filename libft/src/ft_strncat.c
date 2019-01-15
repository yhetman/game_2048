/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:09:13 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/28 17:09:15 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict str1, const char *restrict str2, size_t n)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (str1[++i])
		;
	j = 0;
	while (str2[j] && j < n)
		str1[i++] = str2[j++];
	str1[i] = '\0';
	return (str1);
}
