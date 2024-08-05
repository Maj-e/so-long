/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:50:14 by mjeannin          #+#    #+#             */
/*   Updated: 2024/08/05 22:15:44 by mjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	draw_player_fly_status(t_data *data, int x, int y)
{
	if (data->status.fly == 0)
	{
		if (data->status.side == 0)
			mlx_put_image_to_window(data->mlx, data->mlx_win,
				data->texture.bat1r.img, x * TILE_SIZE, y * TILE_SIZE);
		else if (data->status.side == 1)
			mlx_put_image_to_window(data->mlx, data->mlx_win,
				data->texture.bat1l.img, x * TILE_SIZE, y * TILE_SIZE);
	}
	else if (data->status.fly == 1)
	{
		if (data->status.side == 0)
			mlx_put_image_to_window(data->mlx, data->mlx_win,
				data->texture.bat2r.img, x * TILE_SIZE, y * TILE_SIZE);
		else if (data->status.side == 1)
			mlx_put_image_to_window(data->mlx, data->mlx_win,
				data->texture.bat2l.img, x * TILE_SIZE, y * TILE_SIZE);
	}
}

void	draw_player_exit_status(t_data *data, int x, int y)
{
	if (data->status.side == 0)
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->texture.vampr.img, x * TILE_SIZE, y * TILE_SIZE);
	else if (data->status.side == 1)
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->texture.vampl.img, x * TILE_SIZE, y * TILE_SIZE);
}

void	draw_player(t_data *data, int x, int y)
{
	if (data->status.exit == 0)
    {
		draw_player_fly_status(data, x, y);
	}
	else if (data->status.exit == 1)
    {
		draw_player_exit_status(data, x, y);
	}
}
