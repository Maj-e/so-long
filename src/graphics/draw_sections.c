/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_sections.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matta <matta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:46:23 by matta             #+#    #+#             */
/*   Updated: 2024/07/16 13:46:27 by matta            ###   ########.fr       */
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
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->texture.exit.img, x * TILE_SIZE, y * TILE_SIZE);
}

void	draw_player(t_data *data, int x, int y)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->texture.player.img, x * TILE_SIZE, y * TILE_SIZE);
}
