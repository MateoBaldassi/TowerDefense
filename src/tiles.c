/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** file with all func tiles
*/

#include "my.h"

sfSprite *tile_grass(game_scene_t *map, int j, int i, tile_t tile)
{

    tile.tile = map->map.base_map[j][i];
    tile.sprite = sfSprite_create();
    tile.rect = (sfIntRect){0, 128, 128, 128};
    tile.vector.x = tile.x * 128;
    tile.vector.y = tile.y * 128;
    sfSprite_setTexture(tile.sprite, map->map.texture, sfTrue);
    sfSprite_setTextureRect(tile.sprite, tile.rect);
    sfSprite_setPosition(tile.sprite, tile.vector);
    return (tile.sprite);
}

sfSprite *tile_path_v(game_scene_t *map, int j, int i, tile_t tile)
{

    tile.tile = map->map.base_map[j][i];
    tile.sprite = sfSprite_create();
    tile.rect = (sfIntRect){384, 128, 128, 128};
    tile.vector.x = tile.x * 128;
    tile.vector.y = tile.y * 128;
    sfSprite_setTexture(tile.sprite, map->map.texture, sfTrue);
    sfSprite_setTextureRect(tile.sprite, tile.rect);
    sfSprite_setPosition(tile.sprite, tile.vector);
    return (tile.sprite);
}

sfSprite *tile_path_h(game_scene_t *map, int j, int i, tile_t tile)
{

    tile.tile = map->map.base_map[j][i];
    tile.sprite = sfSprite_create();
    tile.rect = (sfIntRect){384, 128, 128, 128};
    tile.vector.x = (tile.x + 1) * 128;
    tile.vector.y = tile.y * 128;
    sfSprite_setTexture(tile.sprite, map->map.texture, sfTrue);
    sfSprite_setTextureRect(tile.sprite, tile.rect);
    sfSprite_setRotation(tile.sprite, 90);
    sfSprite_setPosition(tile.sprite, tile.vector);
    return (tile.sprite);
}

sfSprite *tile_path_r(game_scene_t *map, int j, int i, tile_t tile)
{

    tile.tile = map->map.base_map[j][i];
    tile.sprite = sfSprite_create();
    tile.rect = (sfIntRect){512, 128, 128, 128};
    tile.vector.x = tile.x * 128;
    tile.vector.y = tile.y * 128;
    sfSprite_setTexture(tile.sprite, map->map.texture, sfTrue);
    sfSprite_setTextureRect(tile.sprite, tile.rect);
    if (tile.tile == 4) {
        sfSprite_setRotation(tile.sprite, 90);
        tile.vector.x += 128;
    }
    sfSprite_setPosition(tile.sprite, tile.vector);
    return (tile.sprite);
}

sfSprite *tile_tree(game_scene_t *map, int j, int i, tile_t tile)
{
    tile.tile = map->map.base_map[j][i];
    tile.sprite = sfSprite_create();
    tile.rect = (sfIntRect){256, 128, 128, 128};
    tile.vector.x = tile.x * 128;
    tile.vector.y = tile.y * 128;
    sfSprite_setTexture(tile.sprite, map->map.texture, sfTrue);
    sfSprite_setTextureRect(tile.sprite, tile.rect);
    sfSprite_setPosition(tile.sprite, tile.vector);
    return (tile.sprite);
}