/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 08:06:47 by yhetman           #+#    #+#             */
/*   Updated: 2018/11/01 08:06:49 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length_of_range(int first, int last)
{
	int j;

	j = 0;
	if (last < first)
		last *= (-1);
	while (first != last)
	{
		j++;
		first++;
	}
	return (j);
}

int			*ft_range(int first, int last)
{
	int	*array;
	int	j;

	j = -1;
	array = NULL;
	if (!(array = (int *)malloc(sizeof(int) * (length_of_range(first, last)))))
		return (0);
	if (last < first)
	{
		while (last <= first)
			array[j++] = first--;
		return (array);
	}
	while (first <= last)
		array[j++] = first++;
	return (array);
}
