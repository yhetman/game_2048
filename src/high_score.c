/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   high_score.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 12:32:27 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/13 12:32:54 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"

int		high_score(void)
{
	int		fd;
	char	*line;
	char	**split;
	int		best;

	split = NULL;
	best = 0;
	if ((fd = open("scores.txt", O_RDONLY)) == -1)
		return (0);
	while (get_next_line(fd, &line))
	{
		if (ft_strchr(line, '='))
			split = ft_strsplit(line, '=');
		free(line);
		if (split[1])
			if (ft_atoi(split[1]) > best)
				best = ft_atoi(split[1]);
	}
	close(fd);
	return (best);
}
