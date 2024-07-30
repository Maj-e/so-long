/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_sections.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 21:08:14 by mjeannin          #+#    #+#             */
/*   Updated: 2024/07/30 21:08:15 by mjeannin         ###   ########.fr       */
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
