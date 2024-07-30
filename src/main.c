/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 21:09:18 by mjeannin          #+#    #+#             */
/*   Updated: 2024/07/30 21:09:19 by mjeannin         ###   ########.fr       */
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
