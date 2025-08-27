# so_long

so_long is a graphical project made for the 42 curriculum. It is a 2D game where the player must explore a map, collect all items, and reach the exit while avoiding enemies.

## Compilation

To compile the project, simply run:

```sh
make
```

The Makefile automatically handles the installation of the minilibx-linux library and the compilation of libft.

To clean object files:

```sh
make clean
```

To remove binaries, objects, libft, and minilibx-linux:

```sh
make fclean
```

To fully recompile:

```sh
make re
```

## Running the game

After compilation, launch the game with:

```sh
./so_long maps/map_name.ber
```

## Game rules

- The player (P) must collect all collectibles (C) to open the exit (E).
- Walls are represented by '1', empty spaces by '0'.
- Enemies (D) may be present depending on the map.
- Reach the exit after collecting everything to win.

## Dependencies

- minilibx-linux (installed automatically)
- libft (provided in the project)

## Author

Maj-e
