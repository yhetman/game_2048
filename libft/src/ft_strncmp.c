/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 20:11:13 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/25 20:12:35 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	j;

	j = 0;
	if (!n)
		return (0);
	while (s1[j] == s2[j] && s2[j] && j < n - 1)
		++j;
	return ((unsigned char)s1[j] - (unsigned char)s2[j]);
}
