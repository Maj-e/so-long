/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 21:08:27 by mjeannin          #+#    #+#             */
/*   Updated: 2024/07/30 21:08:31 by mjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	key_hook(int keycode, t_data *data)
{
	if (keycode == XK_Escape)
		terminate(data);
	else if (keycode == XK_w)
		check_up(data, &(data->player.coord));
	else if (keycode == XK_d)
		check_right(data, &(data->player.coord));
	else if (keycode == XK_s)
		check_down(data, &(data->player.coord));
	else if (keycode == XK_a)
		check_left(data, &(data->player.coord));
}

void	init_window(t_data *data)
{
	data->mlx = mlx_init();
	if (!data->mlx)
		ft_error(data, "Could'nt initialize mlx");
	data->mlx_win = mlx_new_window(
			data->mlx, data->map.width * TILE_SIZE,
			data->map.height * TILE_SIZE, "So_long");
	if (!data->mlx_win)
		ft_error(data, "Could'nt create new window");
	convert_xpm(data);
	mlx_hook(data->mlx_win, DESTROY_NOTIF,
		NO_EVENT_MASK, (void *)terminate, data);
	mlx_hook(data->mlx_win, KeyPress, KeyPressMask, (void *)key_hook, data);
	mlx_expose_hook(data->mlx_win, (void *)draw_map, data);
	mlx_loop(data->mlx);
}
