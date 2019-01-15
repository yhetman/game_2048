/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user_name.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 10:00:17 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/13 10:00:33 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"

void	user_name(t_info *all)
{
	char	*line;

	clear();
	line = ft_strnew(10);
	mvprintw(getmaxy(stdscr) / 2, getmaxx(stdscr) / 2 - 8,
			"What is your name?");
	move(getmaxy(stdscr) / 2 + 2, getmaxx(stdscr) / 2 - 3);
	curs_set(1);
	echo();
	refresh();
	getnstr(line, 10);
	curs_set(0);
	noecho();
	all->user_name = line;
}
