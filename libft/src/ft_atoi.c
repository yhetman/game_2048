/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 16:37:25 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/27 16:37:26 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					mr_minus;
	unsigned long int	number;

	i = 0;
	number = 0;
	mr_minus = 1;
	while ((str[i] == ' ') || (str[i] == '\r') || (str[i] == '\n') ||
			(str[i] == '\t') || (str[i] == '\f') || (str[i] == '\v'))
		i++;
	if (str[i] == '-')
		mr_minus = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		if (number >= 9223372036854775807 && mr_minus == 1)
			return (-1);
		else if (number > 9223372036854775807 && mr_minus == -1)
			return (0);
		i++;
	}
	return ((int)(number * mr_minus));
}
