/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_textures.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 21:08:20 by mjeannin          #+#    #+#             */
/*   Updated: 2024/08/27 18:47:13 by mjeannin         ###   ########.fr       */
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
	xpm_to_img(data, &(data->texture.border), "textures/xpm/wall.xpm");
	xpm_to_img(data, &(data->texture.collectible), "textures/xpm/item.xpm");
	xpm_to_img(data, &(data->texture.ground), "textures/xpm/ground.xpm");
	xpm_to_img(data, &(data->texture.exit), "textures/xpm/close.xpm");
	xpm_to_img(data, &(data->texture.exit2), "textures/xpm/open.xpm");
	xpm_to_img(data, &(data->texture.bat2r), "textures/xpm/bat2r.xpm");
	xpm_to_img(data, &(data->texture.bat2l), "textures/xpm/bat2l.xpm");
	xpm_to_img(data, &(data->texture.bat1r), "textures/xpm/bat1r.xpm");
	xpm_to_img(data, &(data->texture.bat1l), "textures/xpm/bat1l.xpm");
	xpm_to_img(data, &(data->texture.vampr), "textures/xpm/vampr.xpm");
	xpm_to_img(data, &(data->texture.vampl), "textures/xpm/vampl.xpm");
	xpm_to_img(data, &(data->texture.paladinr), "textures/xpm/paladinr.xpm");
	xpm_to_img(data, &(data->texture.paladinl), "textures/xpm/paladinl.xpm");
	xpm_to_img(data, &(data->texture.firel), "textures/xpm/firel.xpm");
	xpm_to_img(data, &(data->texture.firer), "textures/xpm/firer.xpm");
}
