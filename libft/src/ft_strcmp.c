/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:03:46 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/27 14:47:48 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	j;

	j = 0;
	while (s1[j] == s2[j] && s1[j])
		j++;
	return ((unsigned char)s1[j] - (unsigned char)s2[j]);
}
