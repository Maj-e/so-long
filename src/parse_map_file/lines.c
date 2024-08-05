/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lines.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:08:58 by mjeannin          #+#    #+#             */
/*   Updated: 2024/08/05 20:09:16 by mjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

bool	is_line_length_valid(const char *line, size_t width)
{
	if (ft_strchr(line, '\n'))
	{
		return ((size_t)ft_strlen(line) == width + 1);
	}
	else
	{
		return ((size_t)ft_strlen(line) == width);
	}
}
