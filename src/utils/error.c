/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 21:08:59 by mjeannin          #+#    #+#             */
/*   Updated: 2024/07/30 21:09:01 by mjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	ft_error(t_data *data, char *message)
{
	if (message && !(data->map.fn))
		ft_printf("Error\n%s\n", message);
	else if (message && data->map.fn)
		ft_printf("Error\n%s\nFile\n%s\n", message, data->map.fn);
	else if (data->map.fn && !message)
		ft_printf("Error\n%s\nFile\n%s\n", strerror(errno), data->map.fn);
	else
		ft_printf("Error\n%s\n", strerror(errno));
	terminate(data);
}
