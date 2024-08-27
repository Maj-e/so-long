/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ennemies.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:50:16 by mjeannin          #+#    #+#             */
/*   Updated: 2024/08/27 18:55:34 by mjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	draw_ennemies(t_data *data, int y, int x)
{
	if (data->status.exit == 0)
	{
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->texture.border.img, y * TILE_SIZE, x * TILE_SIZE);
	}
	else if (data->status.exit == 1)
	{
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->texture.paladinl.img, y * TILE_SIZE, x * TILE_SIZE);
	}
}
