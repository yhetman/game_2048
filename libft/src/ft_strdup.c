/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:00:17 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/24 17:41:58 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ret;
	int		j;

	j = -1;
	if (!(ret = (char *)malloc(sizeof(*ret) * ft_strlen(src) + 1)))
		return (NULL);
	while (src[++j])
		ret[j] = src[j];
	ret[j] = '\0';
	return (ret);
}
