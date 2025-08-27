/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:41:09 by matta             #+#    #+#             */
/*   Updated: 2025/08/27 13:02:19 by mjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/inc/libft.h"
# include "../minilibx-linux/mlx.h"
# include "fcntl.h"
# include <string.h>
# include <stdbool.h>

# include <X11/keysym.h>
# include <X11/X.h>
# include <errno.h>

# define TRUE 1
# define NONE 0
# define FALSE 0
# define SUCCESS 0
# define ERROR -1
# define TILE_SIZE 64
# define NOTVALID "Map not valid"

# define DESTROY_NOTIF 17
# define NO_EVENT_MASK 0

typedef struct s_coord
{
	size_t	y;
	size_t	x;
	size_t	ey;
	size_t	ex;
}	t_coord;

typedef struct s_status
{
	int		side;
	int		fly;
	int		exit;
	t_coord	coord;
}	t_status;

typedef struct s_player
{
	t_coord	coord;
	size_t	collecs;
	size_t	moves;
}	t_player;

typedef struct s_map
{
	char	*fn;
	int		fd;
	char	**mtrx;
	size_t	width;
	size_t	height;
	size_t	collecs;
	size_t	exits;
	size_t	player;
	size_t	walls;
	size_t	spaces;
	size_t	ennemies;
}	t_map;

typedef struct s_img
{
	void	*img;
	int		width;
	int		height;
}	t_img;

typedef struct s_texture
{
	t_img	border;
	t_img	ground;
	t_img	exit;
	t_img	exit2;
	t_img	collectible;
	t_img	bat1r;
	t_img	bat2r;
	t_img	bat1l;
	t_img	bat2l;
	t_img	vampr;
	t_img	vampl;
	t_img	paladinr;
	t_img	paladinl;
	t_img	firel;
	t_img	firer;
}	t_texture;

typedef struct s_pos
{
	int	fire_x;
	int	fire_y;
}	t_pos;

typedef struct s_data
{
	void		*mlx;
	void		*mlx_win;
	t_texture	texture;
	t_map		map;
	t_status	status;
	t_player	player;
	t_pos		pos;
}	t_data;

//\PARSE_MAP_FILE
// \__parse_file
void	print_map(char **map);
void	parse_file(t_data *data, int argc, char **argv);
bool	is_line_length_valid(const char *line, size_t width);
// \__check_map
int		check_sections(t_map *map, char *line);
void	check_map(t_data *data);
// \__check_path
void	get_player_coord(t_data *data, char **map);
void	check_path(t_data *data);

//\GRAPHICS
// \__init_window
void	init_window(t_data *data);
// \__init_textures
void	convert_xpm(t_data *data);
// \__draw_map
void	draw_map(t_data *data);
//	draw_sections
void	draw_ground(t_data *data, int x, int y);
void	draw_collectible(t_data *data, int x, int y);
void	draw_border(t_data *data, int x, int y);
void	draw_exit(t_data *data, int x, int y);
// \__draw_player
void	draw_player(t_data *data, int x, int y);
void	draw_player_fly_status(t_data *data, int x, int y);
void	draw_player_exit_status(t_data *data, int x, int y);
// \__check_moves
void	check_up(t_data *data, t_coord *coord);
void	check_right(t_data *data, t_coord *coord);
void	check_down(t_data *data, t_coord *coord);
void	check_left(t_data *data, t_coord *coord);
// \__end_game
void	end_game(t_data *data);
// \__ennemies
void	draw_ennemies(t_data *data, int x, int y);
//\UTILS
// \__cleanup
void	free_map(char **map);
void	terminate(t_data *data);
// \__error
void	ft_error(t_data *data, char *message);
// \__open_close_file
void	openf(t_data *data);
void	closef(t_data *data);
// \__utils
void	print_map(char **map);
void	apply_gravity_to_player(t_data *data);
// \__status
void	check_open(t_data *data);
void	move_status(t_data *data);

#endif