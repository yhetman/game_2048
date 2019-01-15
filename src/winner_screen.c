/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   winner_screen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 04:07:49 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/13 10:02:32 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"

void	winner_screen(void)
{
	int		x;
	int		y;

	y = getmaxy(stdscr) / 2;
	x = getmaxx(stdscr) / 2 - 17;
	attron(COLOR_PAIR(16));
	mvhline(y - 1, x - 10, ' ', 55);
	mvhline(y, x - 10, ' ', 55);
	mvhline(y + 1, x - 10, ' ', 55);
	mvhline(y + 2, x - 10, ' ', 55);
	mvhline(y + 3, x - 10, ' ', 55);
	mvprintw(y, x, "Congratulation ! You just reach %d", WIN_VALUE);
	mvprintw(y + 2, x - 5, "Press c to continue   q to quit");
	attroff(COLOR_PAIR(COLOR_MENU));
}
