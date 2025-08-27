/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 21:09:12 by mjeannin          #+#    #+#             */
/*   Updated: 2025/08/27 13:03:06 by mjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	print_map(char **map)
{
	int i;
	int j;

	i = -1;
	while (map[++i])
	{
		j = -1;
		while (map[i][++j])
			ft_printf("%c", map[i][j]);
		ft_printf("\n");
	}
}

// Gravity system for player: moves player down if possible
void apply_gravity_to_player(t_data *data)
{
	int x = data->player.coord.x;
	int y = data->player.coord.y;
	// Check if below is empty
	if (data->map.mtrx[y + 1] && data->map.mtrx[y + 1][x] == '0')
	{
		// Move player down
		data->map.mtrx[y][x] = '0';
		data->map.mtrx[y + 1][x] = 'P';
		data->player.coord.y = y + 1;
		data->player.moves++;
		ft_printf("Gravity: player moved down to (%d, %d)\n", x, y + 1);
		draw_map(data);
	}
}
