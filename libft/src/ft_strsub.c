/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 19:53:12 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/30 16:11:02 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = -1;
	if (!s || !(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (++i < len)
		str[i] = s[start++];
	str[i] = '\0';
	return (str);
}
