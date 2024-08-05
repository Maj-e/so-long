/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ennemies.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:44:07 by mjeannin          #+#    #+#             */
/*   Updated: 2024/08/05 22:21:20 by mjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void    draw_ennemies(t_data *data, int y, int x)
{
    if(data->status.exit == 0)
     mlx_put_image_to_window(data->mlx, data->mlx_win,
		    data->texture.border.img, y * TILE_SIZE, x * TILE_SIZE);
    else if(data->status.exit == 1)
	    mlx_put_image_to_window(data->mlx, data->mlx_win,
		    data->texture.paladinL.img, y * TILE_SIZE, x * TILE_SIZE);
}

// data player coord
/* 
1- faire spawner l'ennemi pret de la sortie ou de la derniere fiole
2- ajouter data position attaque pour suivre l'attaque, 
ensuite soit lancer une nouvelle attaque tous les X mouvement, sois quand l'attaque collisione a une paroi
3- fonction pour determiner le cote vers lequel se tourne l'ennemi
4- fonction exit si le joueur touche une boule de lumiere (introduire loop si le temps)
5- refaire les maps pour mettre le cerceuil dans des endroits fermes pour obliger a choisir un chemin et un timing
*/