/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   status.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:55:41 by mjeannin          #+#    #+#             */
/*   Updated: 2024/08/05 19:57:04 by mjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_open(t_data *data)
{
	if (data->player.collecs == data->map.collecs)
	{
		data->status.exit = 1;
		draw_map(data);
	}
}

void	move_status(t_data *data)
{
	if (data->status.fly == 0)
		data->status.fly = 1;
	else if (data->status.fly == 1)
		data->status.fly = 0;
}
