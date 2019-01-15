/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 18:03:59 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/29 18:04:01 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*memory;
	size_t	i;

	i = -1;
	if (!(memory = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (++i < size)
		memory[i] = '\0';
	memory[i] = '\0';
	return (memory);
}
