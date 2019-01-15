/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_score.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 12:30:54 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/13 12:33:19 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"

void	save_highest_score(int score, char *user_name)
{
	char	*line;
	int		fd;

	clear();
	if ((fd = open("scores.txt", O_RDWR | O_CREAT | O_APPEND)) == -1)
	{
		mvprintw(getmaxy(stdscr) / 2, getmaxx(stdscr) / 2 - 8, "Error open");
		return ;
	}
	line = ft_strjoin(user_name, "=");
	line = ft_strjoin(line, ft_itoa(score));
	ft_putendl_fd(line, fd);
	close(fd);
}
