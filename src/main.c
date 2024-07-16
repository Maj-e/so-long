/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matta <matta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:47:10 by matta             #+#    #+#             */
/*   Updated: 2024/07/16 13:47:58 by matta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int argc, char **argv)
{
	t_data	data;

	data = (t_data){0};
	parse_file(&data, argc, argv);
	check_map(&data);
	init_window(&data);
	return (SUCCESS);
}
