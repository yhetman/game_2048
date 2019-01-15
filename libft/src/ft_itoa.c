/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 18:31:24 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/30 18:31:25 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	mr_minus(int n)
{
	if (n < 0)
		return (-1);
	else
		return (1);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		tempo;
	int		length;

	tempo = n;
	if (n <= 0)
		length = 1;
	else
		length = 0;
	while (++length && tempo)
		tempo /= 10;
	if (!(str = (char *)malloc(sizeof(char) * length)))
		return (NULL);
	str[--length] = '\0';
	*str = '0';
	tempo = n;
	while (tempo)
	{
		str[--length] = '0' + mr_minus(n) * (tempo % 10);
		tempo /= 10;
	}
	n < 0 ? *str = '-' : 0;
	return (str);
}
