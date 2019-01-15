/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user_info.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 02:16:48 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/13 06:30:08 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"

static void	apply_menu(int y, int x, int i)
{
	clear();
	if (i == 0)
		attron(COLOR_PAIR(COLOR_4));
	mvhline(y - 1, x - 4, ' ', 20);
	mvprintw(y, x - 4, "      New GAME      ");
	mvhline(y + 1, x - 4, ' ', 20);
	if (i == 0)
		attroff(COLOR_PAIR(COLOR_4));
	if (i == 1)
		attron(COLOR_PAIR(COLOR_4));
	mvhline(y + 3, x - 4, ' ', 20);
	mvprintw(y + 4, x - 4, "        EXIT        ");
	mvhline(y + 5, x - 4, ' ', 20);
	if (i == 1)
		attroff(COLOR_PAIR(COLOR_4));
	if (i == 2)
		attron(COLOR_PAIR(COLOR_4));
	refresh();
}

static void	cycl(int *c, int y, int x, int i)
{
	while (*c != 10 && *c != 27)
	{
		*c = getch();
		y = getmaxy(stdscr) / 2 - 4;
		x = getmaxx(stdscr) / 2 - 4;
		if (*c == DOWN && i < 2)
			i++;
		else if (*c == UP && i > 0)
			i--;
		else if (*c == 10 && i == 1)
		{
			endwin();
			exit(0);
		}
		apply_menu(y, x, i);
	}
}

int			user_info(void)
{
	int		x;
	int		y;
	int		c;
	int		i;

	clear();
	refresh();
	c = 0;
	i = 0;
	y = getmaxy(stdscr) / 2 - 4;
	x = getmaxx(stdscr) / 2 - 4;
	apply_menu(y, x, i);
	cycl(&c, y, x, i);
	if (c == 27)
		return (0);
	return (1);
}
