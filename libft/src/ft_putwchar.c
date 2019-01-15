/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 14:04:36 by yhetman           #+#    #+#             */
/*   Updated: 2018/12/29 21:04:03 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putwchar(wchar_t w)
{
	if (w >= 0 && w <= 127)
		return (ft_wtoi_p1(w, 1));
	else if (w >= 128 && w <= 255)
		return (write(1, &w, 1));
	else if (w >= 256 && w <= 2047)
		return (ft_wtoi_p2(w, 1));
	else if (w >= 2048 && w <= 65535)
		return (ft_wtoi_p3(w, 1));
	else if (w >= 65536 && w <= 2097151)
		return (ft_wtoi_p4(w, 1));
	return (0);
}

int	ft_wtoi_p1(wchar_t w, int fd)
{
	write(fd, &w, 1);
	return (1);
}

int	ft_wtoi_p2(wchar_t w, int fd)
{
	unsigned char	*vect;
	int				i;

	i = 0;
	vect = (unsigned char *)ft_strnew(2);
	vect[0] = ((w >> 6) | 192);
	vect[1] = ((w ^ ((w >> 6) << 6)) | 128);
	while (vect[i])
		write(fd, &vect[i++], 1);
	free(vect);
	return (i);
}

int	ft_wtoi_p3(wchar_t w, int fd)
{
	unsigned char	*vect;
	int				i;

	i = 0;
	vect = (unsigned char *)ft_strnew(3);
	vect[0] = ((w >> 12) | 224);
	if (w >= 2048 && w <= 4095)
		vect[1] = ((w >> 6) | 160);
	else if (w >= 53248 && w <= 55295)
		vect[1] = (((w >> 6) ^ 832) | 128);
	else
		vect[1] = ((((w >> 6) ^ ((w >> 12) << 6))) | 128);
	vect[2] = ((w ^ ((w >> 6) << 6)) | 128);
	while (vect[i])
		write(fd, &vect[i++], 1);
	free(vect);
	return (i);
}

int	ft_wtoi_p4(wchar_t w, int fd)
{
	unsigned char	*vect;
	int				i;

	i = 0;
	vect = (unsigned char *)ft_strnew(4);
	vect[0] = ((w >> 18) | 240);
	if (w >= 65536 && w <= 131071)
		vect[1] = (((w >> 12) ^ 32) | 128);
	else if (w >= 131072 && w <= 262143)
		vect[1] = (((w >> 12) ^ 64) | 128);
	else if (w >= 1048576 && w <= 1114111)
		vect[1] = ((((w >> 12) ^ 256)) | 128);
	else
		vect[1] = ((((w >> 12) ^ ((w >> 18) << 6))) | 128);
	vect[2] = ((((w >> 6) ^ ((w >> 12) << 6))) | 128);
	vect[3] = ((w ^ ((w >> 6) << 6)) | 128);
	while (vect[i])
		write(fd, &vect[i++], 1);
	free(vect);
	return (i);
}
