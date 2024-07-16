/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_game.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matta <matta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:46:43 by matta             #+#    #+#             */
/*   Updated: 2024/07/16 13:46:44 by matta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	end_game(t_data *data)
{
	data->player.moves++;
	ft_printf("Moves: %d\n", (int)data->player.moves);
	ft_printf(
		"You won in %d moves, congratulations!\n", (int)data->player.moves);
	terminate(data);
}
