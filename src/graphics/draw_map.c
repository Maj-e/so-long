/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matta <matta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:27:28 by smoore-a          #+#    #+#             */
/*   Updated: 2024/07/16 13:42:28 by matta            ###   ########.fr       */
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
			else if (data->map.mtrx[i][j] == 'P')
				draw_player(data, j, i);
		}
	}
}
