/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 23:48:23 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/13 10:04:43 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"

static void		print_numbers(t_info *all)
{
	int		x;
	int		y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			attron(COLOR_PAIR(ft_sqrt(all->board[y][x].value)));
			if (all->board[y][x].value != 0)
				mvprintw((y * all->piece_length) + all->piece_length / 2 + 3,
						(x * all->piece_width) + all->piece_width / 2
						- (ft_numblength(all->board[y][x].value) / 2),
						"%d", all->board[y][x].value);
			attroff(COLOR_PAIR(all->board[y][x].value));
			x++;
		}
		y++;
	}
}

static void		print_header(t_info *all)
{
	attron(COLOR_PAIR(COLOR_MENU));
	move(0, 0);
	whline(stdscr, ' ', all->piece_width * 4 + 1);
	move(1, 0);
	whline(stdscr, ' ', all->piece_width * 4 + 1);
	move(2, 0);
	whline(stdscr, ' ', all->piece_width * 4 + 1);
	if (total_score(all) > all->high_score)
		all->high_score = total_score(all);
	mvprintw(1, getmaxx(stdscr) - 35, "Score : %d HighScore : %d",
			total_score(all), all->high_score);
	attroff(COLOR_PAIR(COLOR_MENU));
}

static void		print_board(t_info *all)
{
	int		i;

	all->piece_length = piece_row_size();
	all->piece_width = piece_column_size();
	start_color();
	attron(COLOR_PAIR(COLOR_BORDER));
	i = -1;
	while (++i < 5)
	{
		move(3, all->piece_width * i);
		wvline(stdscr, ' ', all->piece_length * 4);
	}
	i = -1;
	while (++i < 5)
	{
		move(all->piece_length * i + 3, 0);
		whline(stdscr, ' ', all->piece_width * 4 + 1);
	}
	attroff(COLOR_PAIR(COLOR_BORDER));
	print_header(all);
}

void			drawing(t_info *all)
{
	print_board(all);
	print_all_pieces(all);
	print_numbers(all);
}
