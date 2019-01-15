/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 18:25:01 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/27 18:37:55 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict srce, size_t size)
{
	size_t	dest_length;
	size_t	srce_length;
	size_t	i;

	i = 0;
	srce_length = 0;
	dest_length = ft_strlen(dest);
	while (dest[srce_length] && srce_length < size)
		srce_length++;
	if (srce_length >= size)
		return (size + ft_strlen(srce));
	while (srce[i] && i < (size - dest_length - 1))
	{
		dest[srce_length + i] = ((char *)srce)[i];
		i++;
	}
	dest[srce_length + i] = '\0';
	return (srce_length + ft_strlen(srce));
}
