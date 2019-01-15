/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 17:50:19 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/27 19:38:36 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *srce)
{
	int i;
	int j;

	i = -1;
	j = 0;
	while (dest[++i])
		;
	while (srce[j])
		dest[i++] = srce[j++];
	dest[i] = '\0';
	return (dest);
}
