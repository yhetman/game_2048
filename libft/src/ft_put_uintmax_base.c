/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uintmax_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 14:03:32 by yhetman           #+#    #+#             */
/*   Updated: 2018/12/27 14:15:29 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_put_uintmax_base(uintmax_t n, char *b)
{
	char	*s;
	int		result;

	s = ft_uintmax_base_toa(n, b);
	result = ft_putstr(s);
	free(s);
	return (result);
}

char	*ft_uintmax_base_toa(uintmax_t n, char *b)
{
	int		i;
	int		b_size;
	char	*s;

	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	b_size = ft_strlen(b);
	s = ft_strnew(ft_umaxlen_base(n, b_size) + 1);
	while (n)
	{
		s[i++] = b[n % b_size];
		n /= b_size;
	}
	s[i] = '\0';
	return (ft_strrev(s));
}
