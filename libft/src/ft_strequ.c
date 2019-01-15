/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 20:52:35 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/27 20:54:13 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(const char *s1, const char *s2)
{
	char	*str1;
	char	*str2;

	if (!s1 && !s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	str1 = (char *)s1;
	str2 = (char *)s2;
	if (ft_strcmp(str1, str2) == 0)
		return (1);
	return (0);
}
