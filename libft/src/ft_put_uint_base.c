/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uint_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 14:03:05 by yhetman           #+#    #+#             */
/*   Updated: 2018/12/29 21:03:03 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_put_uint_base(unsigned int numb, char *base)
{
	char	*str;
	int		i;

	if (numb > 4294967295)
		return (ft_putchar('0'));
	str = ft_utoa_base(numb, base);
	i = ft_putstr(str);
	free(str);
	return (i);
}

char	*ft_utoa_base(unsigned int numb, char *base)
{
	int		i;
	int		base_size;
	char	*str;

	if (numb == 0)
		return (ft_strdup("0"));
	i = 0;
	base_size = ft_strlen(base);
	str = ft_strnew(ft_ulen_base(numb, base_size) + 1);
	while (numb)
	{
		str[i++] = base[numb % base_size];
		numb /= base_size;
	}
	str[i] = '\0';
	return (ft_strrev(str));
}

int		ft_ulen_base(unsigned int nbr, int base)
{
	int	i;

	i = 1;
	while (nbr /= base)
		i++;
	return (i);
}
