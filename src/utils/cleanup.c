/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 21:08:54 by mjeannin          #+#    #+#             */
/*   Updated: 2024/07/31 16:10:31 by mjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../../include/so_long.h"

void	free_map(char **map)
{
	int	i;

	if (map == NULL)
		return ;
	i = 0;
	while (map[i])
	{
		free(map[i]);
		i++;
	}
	free(map);
	map = NULL;
}

static void	destroy_imgs(t_data *data)
{
	if (data->texture.border.img)
		mlx_destroy_image(data->mlx, data->texture.border.img);
	if (data->texture.collectible.img)
		mlx_destroy_image(data->mlx, data->texture.collectible.img);
	if (data->texture.exit.img)
		mlx_destroy_image(data->mlx, data->texture.exit.img);
	if (data->texture.ground.img)
		mlx_destroy_image(data->mlx, data->texture.ground.img);
	if (data->texture.bat1l.img)
		mlx_destroy_image(data->mlx, data->texture.bat1l.img);
	if (data->texture.bat2l.img)
		mlx_destroy_image(data->mlx, data->texture.bat2l.img);
	if (data->texture.bat1r.img)
		mlx_destroy_image(data->mlx, data->texture.bat1r.img);
	if (data->texture.bat2r.img)
		mlx_destroy_image(data->mlx, data->texture.bat2r.img);
	
		
}

void	terminate(t_data *data)
{
	if (data)
	{
		if (data->map.fd != ERROR)
			closef(data);
		if (data->map.mtrx)
			free_map(data->map.mtrx);
		if (data->mlx)
		{
			destroy_imgs(data);
			if (data->mlx_win)
				mlx_destroy_window(data->mlx, data->mlx_win);
			mlx_destroy_display(data->mlx);
			free(data->mlx);
			data->mlx = NULL;
		}
	}
	exit(EXIT_SUCCESS);
}
