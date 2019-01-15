/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 18:07:18 by yhetman           #+#    #+#             */
/*   Updated: 2018/11/10 18:07:22 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strjoin_free(char *s1, char *s2)
{
	char	*joined;
	int		j;
	int		i;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	joined = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (joined == NULL)
		return (NULL);
	while (s1[i])
		joined[j++] = s1[i++];
	i = 0;
	while (s2[i])
		joined[j++] = s2[i++];
	joined[j] = '\0';
	free(s1);
	return (joined);
}

static int	ft_define_line(char **fd_file, char **line)
{
	char	*end_l;
	char	*buff;
	char	*tmp;

	if (!fd_file[0])
		return (0);
	if ((end_l = ft_strchr(fd_file[0], '\n')))
	{
		if (!(buff = ft_strnew(end_l - fd_file[0])))
			return (-1);
		ft_strncpy(buff, fd_file[0], (end_l - fd_file[0]));
		tmp = fd_file[0];
		fd_file[0] = ft_strdup(end_l + 1);
		free(tmp);
		line[0] = ft_strdup(buff);
		free(buff);
		return (1);
	}
	else if (*fd_file[0])
	{
		line[0] = ft_strdup(fd_file[0]);
		fd_file[0] = ft_strnew(0);
		return (1);
	}
	return (0);
}

static int	ft_define_file(int fd, char **fd_file, int result)
{
	char	*buff;

	if (!(buff = ft_strnew(BUFF_SIZE)))
		return (-1);
	while ((result = read(fd, buff, BUFF_SIZE)) > 0)
	{
		if (!fd_file[0])
			fd_file[0] = ft_strdup(buff);
		else
			fd_file[0] = ft_strjoin_free(fd_file[0], buff);
		free(buff);
		if (!(buff = ft_strnew(BUFF_SIZE)))
			return (-1);
	}
	free(buff);
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	static char	*fd_file[4684];

	if (!line || (!(*line = 0) && fd < 0)
		|| (read(fd, NULL, 0)) < 0 || BUFF_SIZE < 0)
		return (-1);
	if (ft_define_file(fd, &fd_file[fd], 0) < 0)
		return (-1);
	return (ft_define_line(&fd_file[fd], line));
}
