/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** file with all types of enemy
*/

#include "my.h"

enemy_t init_ork(sfTexture *texture, int pos)
{
    enemy_t ork;
    ork.clock = sfClock_create();
    ork.sprite = sfSprite_create();
    ork.position = (sfVector2f){256, 1024 + (pos * 100)};
    ork.hit_box = (sfFloatRect) {ork.position.x, ork.position.y, 120, 100};
    ork.rect = (sfIntRect){0, 0, 120, 100};
    ork.x = 0;

    sfSprite_setTexture(ork.sprite, texture, sfTrue);
    sfSprite_setPosition(ork.sprite, ork.position);
    sfSprite_setTextureRect(ork.sprite, ork.rect);
    return (ork);
}

enemy_t ork_basic(int health, map_t map, int pos)
{
    enemy_t ork = init_ork(map.t_orkb, pos);
    ork.speed = 2;
    ork.health = health;
    ork.display = 1;
}

enemy_t ork_tank(int health, map_t map, int pos)
{
    enemy_t ork = init_ork(map.t_orkt, pos);
    ork.speed = 1;
    ork.health = health;
    ork.display = 1;
}

enemy_t ork_speed(int health, map_t map, int pos)
{
    enemy_t ork = init_ork(map.t_orks, pos);
    ork.speed = 3;
    ork.health = health;
    ork.display = 1;
}