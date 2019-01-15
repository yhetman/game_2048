/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 22:20:14 by yhetman           #+#    #+#             */
/*   Updated: 2018/12/01 22:20:15 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(const char *s)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s) - 1;
	str = (char *)malloc(sizeof(char) * j);
	while (i < ft_strlen(s) && str)
		str[i++] = s[j--];
	str[i] = '\0';
	return (str);
}
