/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** map.c
*/

#include "my.h"

char *recup_map(char *map)
{
    int fd = 0;
    int i = 0;
    char *buffer;

    buffer = malloc(sizeof(char)* 128);
    fd = open(map, O_RDONLY);
    i = read(fd, buffer, 128);
    if (i == -1)
        return (NULL);
    return (buffer);
}

int **create_map(char *map)
{
    char *char_map = recup_map(map);
    int **array = malloc (sizeof(int *) * 8);
    int k = 0;
    int i = 0;

    if (char_map == NULL)
        return (NULL);
    for (i = 0; i < 8; i++)
        array[i] = malloc(sizeof(int) * 15);
    for (int j = 0; j != 8 || i != 15; j++) {
        for (i = 0; i < 15; i++) {
            if (char_map[k] == '\n')
                k++;
            array[j][i] = char_map[k] - 48;
            k++;
        }
    }
    return (array);
}

sfSprite *set_tile_text(game_scene_t *map, int j, int i)
{
    tile_t tile;
    sfSprite *(*flag[])(game_scene_t *, int, int, tile_t) = \
    {tile_grass, tile_path_h, tile_path_v, tile_path_r, tile_path_r, \
    tile_path_r, tile_path_r, tile_tree};
    tile.x = i;
    tile.y = j;
    tile.tile = map->map.base_map[j][i];
    tile.sprite = flag[map->map.base_map[j][i]](map, j, i, tile);
    return (tile.sprite);
}

void draw_map(sfRenderWindow *window, game_scene_t game_scene)
{
    for (int j = 0; j < 8; j++)
        for (int i = 0; i < 15; i++)
            sfRenderWindow_drawSprite(window, \
            set_tile_text(&game_scene, j, i), NULL);
}