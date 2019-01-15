/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 17:46:14 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/29 17:46:23 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*memory;
	size_t	i;

	i = -1;
	if (!(memory = malloc(size)))
		return (NULL);
	while (++i < size)
		((unsigned char *)memory)[i] = '\0';
	return (memory);
}
