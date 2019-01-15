/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 14:04:59 by yhetman           #+#    #+#             */
/*   Updated: 2018/12/29 21:03:21 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putwstr(wchar_t *wstr)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (wstr[i])
	{
		result += ft_putwchar(wstr[i]);
		i++;
	}
	return (result);
}
