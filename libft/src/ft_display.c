/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 20:43:21 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/28 20:43:23 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_display(char *argv)
{
	int		fd;
	int		ret;
	char	buff[BUFF_SIZE + 1];

	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)))
	{
		buff[ret] = '\0';
		ft_putstr(buff);
	}
	close(fd);
	return (1);
}
