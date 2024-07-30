/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_close_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 21:09:05 by mjeannin          #+#    #+#             */
/*   Updated: 2024/07/30 21:09:07 by mjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	openf(t_data *data)
{
	data->map.fd = open(data->map.fn, O_RDONLY);
	if (data->map.fd == ERROR)
		ft_error(data, NULL);
}

void	closef(t_data *data)
{
	data->map.fd = close(data->map.fd);
	if (data->map.fd == ERROR)
		ft_error(data, NULL);
}
