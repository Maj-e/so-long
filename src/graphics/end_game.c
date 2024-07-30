/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_game.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 21:08:04 by mjeannin          #+#    #+#             */
/*   Updated: 2024/07/30 21:08:05 by mjeannin         ###   ########.fr       */
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
