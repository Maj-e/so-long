/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_close_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:07:43 by smoore-a          #+#    #+#             */
/*   Updated: 2024/07/30 17:03:33 by mjeannin         ###   ########.fr       */
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
