/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_textures.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 21:01:02 by smoore-a          #+#    #+#             */
/*   Updated: 2024/07/30 18:02:41 by mjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	xpm_to_img(t_data *data, t_img *texture, char *path)
{
	int	width;
	int	height;

	width = TILE_SIZE;
	height = TILE_SIZE;
	texture->img = mlx_xpm_file_to_image(data->mlx, path, &width, &height);
	if (!texture->img)
		ft_error(data, "Failed to convert xpm");
}

void	convert_xpm(t_data *data)
{
	xpm_to_img(data, &(data->texture.border), "64_px_xpm/wall.xpm");
	xpm_to_img(data, &(data->texture.collectible), "64_px_xpm/item.xpm");
	xpm_to_img(data, &(data->texture.ground), "64_px_xpm/wall.xpm"); //background
	xpm_to_img(data, &(data->texture.exit), "64_px_xpm/close.xpm");
	xpm_to_img(data, &(data->texture.player), "64_px_xpm/bat2r.xpm");
}
