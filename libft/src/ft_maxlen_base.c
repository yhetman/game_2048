/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 21:50:24 by yhetman           #+#    #+#             */
/*   Updated: 2018/12/29 21:01:53 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_umaxlen_base(uintmax_t n, int base)
{
	int	i;

	i = 1;
	while (n /= base)
		i++;
	return (i);
}

int	ft_imaxlen_base(intmax_t n, int base)
{
	int	i;

	i = 1;
	while (n /= base)
		i++;
	return (i);
}
