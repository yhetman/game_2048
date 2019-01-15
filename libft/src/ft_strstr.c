/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:02:56 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/25 19:50:19 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;
	int	k;

	i = 0;
	while (str[i])
	{
		k = i;
		j = 0;
		while (str[k] == to_find[j] && to_find[j])
		{
			k++;
			j++;
		}
		if (!to_find[j])
			return ((char*)&str[k - j]);
		i++;
	}
	if (*str == '\0' && *to_find == '\0')
		return ((char*)str);
	return (NULL);
}
