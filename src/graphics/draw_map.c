/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 21:07:58 by mjeannin          #+#    #+#             */
/*   Updated: 2024/08/05 22:21:47 by mjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	draw_map(t_data *data)
{
	int	i;
	int	j;

	i = -1;
	while (data->map.mtrx[++i])
	{
		j = -1;
		while (data->map.mtrx[i][++j])
		{
			if (data->map.mtrx[i][j] == '0')
				draw_ground(data, j, i);
			else if (data->map.mtrx[i][j] == '1')
				draw_border(data, j, i);
			else if (data->map.mtrx[i][j] == 'C')
				draw_collectible(data, j, i);
			else if (data->map.mtrx[i][j] == 'E')
				draw_exit(data, j, i);
			else if (data->map.mtrx[i][j] == 'D')
				draw_ennemies(data, j, i);
			else if (data->map.mtrx[i][j] == 'P')
				draw_player(data, j, i);
		}
	}
}
