/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numblength.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 03:25:56 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/13 03:30:47 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_numblength(int number)
{
	int		res;
	int		temp;

	temp = number;
	res = 0;
	while (temp / 10)
	{
		res++;
		temp /= 10;
	}
	return (res);
}
