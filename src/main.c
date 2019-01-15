/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 16:37:27 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/13 06:04:56 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"

static int			check_pow(void)
{
	int	j;

	j = 2;
	while (j <= WIN_VALUE)
	{
		if (j == WIN_VALUE)
			return (0);
		j *= 2;
	}
	ft_strerr("Value isn't a power of 2.\n");
	return (1);
}

static int			primary_filling(t_info *all)
{
	all->user_name = NULL;
	if (check_pow() == 1)
		return (0);
	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	curs_set(0);
	initialization(all);
	return (1);
}

static void			reset_board(t_piece board[BOARD_SIZE][BOARD_SIZE])
{
	int		y;
	int		x;

	y = -1;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
			board[y][x].new_val = 0;
	}
}

static void			func(t_info all, int dir)
{
	while (user_info())
	{
		initialization(&all);
		user_name(&all);
		clear();
		drawing(&all);
		while ((dir == -20 || (dir = getch()) != 27) &&
		!(getmaxy(stdscr) < 15 || getmaxx(stdscr) < 20))
		{
			all.move = 0;
			switch_direction(dir, &all);
			reset_board(all.board);
			if ((dir == UP || dir == DOWN || dir == LEFT || dir == RIGHT)
				&& all.move == 1)
			{
				clear();
				numbers_generator(all.board);
			}
			if (ending(&all) == 1)
				break ;
			drawing(&all);
			refresh();
			dir = 0;
		}
	}
}

int					main(void)
{
	int			dir;
	t_info		all;

	if (!primary_filling(&all))
		return (0);
	dir = -20;
	func(all, dir);
	if (getmaxy(stdscr) < 15 || getmaxx(stdscr) < 20)
		ft_strerr("Window is too small, exiting\n");
	endwin();
	return (0);
}
