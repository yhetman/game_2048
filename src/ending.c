/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ending.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 04:02:31 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/15 11:16:58 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"

static int		draw_winning(t_info *all)
{
	int		c;

	drawing(all);
	winner_screen();
	all->win++;
	while ((c = getch()))
	{
		if (c == 'c')
			return (1);
		else if (c == 'q')
			return (0);
	}
	return (0);
}

static int		lost_pruffs(t_info *all)
{
	int		x;
	int		y;

	y = -1;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
		{
			if (x < 3 && all->board[y][x].value == all->board[y][x + 1].value)
				return (0);
			if (y < 3 && all->board[y][x].value == all->board[y + 1][x].value)
				return (0);
			if (all->board[y][x].value == 0)
				return (0);
		}
	}
	return (1);
}

static int		cycl(int key, int i, t_info *all)
{
	while (key != 10)
	{
		key = getch();
		if (key == LEFT && i > 0)
			i--;
		else if (key == RIGHT && i < 2)
			i++;
		else if (key == 10 && i == 0)
		{
			clear();
			initialization(all);
			return (1);
		}
		else if (key == 10 && i == 2)
		{
			save_highest_score(total_score(all), all->user_name);
			endwin();
			exit(0);
			return (0);
		}
		loser_screen(all, i);
	}
	return (0);
}

static int		draw_losing(t_info *all)
{
	int		key;
	int		i;

	key = 0;
	keypad(stdscr, TRUE);
	i = 0;
	loser_screen(all, i);
	return (cycl(key, i, all));
}

int				ending(t_info *all)
{
	if (all->move == 1)
	{
		if (lost_pruffs(all) == 1)
		{
			if (draw_losing(all) == 1)
				return (2);
			return (1);
		}
	}
	if (victory_pruffs(all))
	{
		if (!draw_winning(all))
			return (1);
	}
	clear();
	return (0);
}
