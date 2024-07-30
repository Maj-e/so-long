/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_textures.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 21:08:20 by mjeannin          #+#    #+#             */
/*   Updated: 2024/07/30 21:08:24 by mjeannin         ###   ########.fr       */
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
	xpm_to_img(data, &(data->texture.border), "textures/64px_xpm/wall.xpm");
	xpm_to_img(data, &(data->texture.collectible), "textures/64px_xpm/item.xpm");
	xpm_to_img(data, &(data->texture.ground), "textures/ground.xpm");
	xpm_to_img(data, &(data->texture.exit), "textures/64px_xpm/close.xpm");
	xpm_to_img(data, &(data->texture.player), "textures/64px_xpm/bat2r.xpm");
}
