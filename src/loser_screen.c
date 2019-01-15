/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loser_screen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 10:01:15 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/13 10:01:36 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"

static void		also(int i, int x, int y)
{
	if (i == 0)
		attron(COLOR_PAIR(COLOR_512));
	mvprintw(y + 2, x - 4, "retry");
	if (i == 0)
		attroff(COLOR_PAIR(COLOR_512));
	if (i == 1)
		attron(COLOR_PAIR(COLOR_512));
	mvprintw(y + 2, x + 16, "back to menu");
	if (i == 1)
		attroff(COLOR_PAIR(COLOR_512));
	if (i == 2)
		attron(COLOR_PAIR(COLOR_512));
	mvprintw(y + 2, x + 36, "save and quit");
	if (i == 2)
		attron(COLOR_PAIR(COLOR_512));
}

void			loser_screen(t_info *all, int i)
{
	int		x;
	int		y;

	clear();
	drawing(all);
	y = getmaxy(stdscr) / 2;
	x = getmaxx(stdscr) / 2 - 22;
	attron(COLOR_PAIR(COLOR_MENU));
	mvhline(y - 1, x - 5, ' ', 55);
	mvhline(y, x - 5, ' ', 55);
	mvhline(y + 1, x - 5, ' ', 55);
	mvhline(y + 2, x - 5, ' ', 55);
	mvhline(y + 3, x - 5, ' ', 55);
	mvprintw(y, x + 18, "You lose");
	attroff(COLOR_PAIR(COLOR_MENU));
	also(i, x, y);
}
