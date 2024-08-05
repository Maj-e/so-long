/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_sections.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 21:08:14 by mjeannin          #+#    #+#             */
/*   Updated: 2024/08/05 19:58:40 by mjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	draw_ground(t_data *data, int x, int y)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->texture.ground.img, x * TILE_SIZE, y * TILE_SIZE);
}

void	draw_collectible(t_data *data, int x, int y)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->texture.collectible.img, x * TILE_SIZE, y * TILE_SIZE);
}

void	draw_border(t_data *data, int x, int y)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->texture.border.img, x * TILE_SIZE, y * TILE_SIZE);
}

void	draw_exit(t_data *data, int x, int y)
{
	if (data->status.exit == 0)
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->texture.exit.img, x * TILE_SIZE, y * TILE_SIZE);
	else if (data->status.exit == 1)
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->texture.exit2.img, x * TILE_SIZE, y * TILE_SIZE);
}

void	draw_player(t_data *data, int x, int y)
{
	if (data->status.exit == 0)
	{
		if (data->status.fly == 0)
		{
			if (data->status.side == 0)
				mlx_put_image_to_window(data->mlx, data->mlx_win,
					data->texture.bat1r.img, x * TILE_SIZE, y * TILE_SIZE);
			else if (data->status.side == 1)
			{
				mlx_put_image_to_window(data->mlx, data->mlx_win,
					data->texture.bat1l.img, x * TILE_SIZE, y * TILE_SIZE);
			}
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
	else if (data->status.exit == 1)
	{
		if (data->status.side == 0)
			mlx_put_image_to_window(data->mlx, data->mlx_win,
				data->texture.vampr.img, x * TILE_SIZE, y * TILE_SIZE);
		else if (data->status.side == 1)
			mlx_put_image_to_window(data->mlx, data->mlx_win,
				data->texture.vampl.img, x * TILE_SIZE, y * TILE_SIZE);
	}
}
