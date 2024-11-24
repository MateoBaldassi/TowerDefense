/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** tower.c
*/

#include "my.h"

tower_t init_tower(sfTexture *texture, int x, int y)
{
    tower_t tower;
    tower.sprite = sfSprite_create();
    tower.vect = (sfVector2f){x, y};

    sfSprite_setTexture(tower.sprite, texture, sfTrue);
    sfSprite_setPosition(tower.sprite, tower.vect);
    return tower;
}

int init_texture_tower(game_scene_t *gs)
{
    gs->tower_texture[0] = sfTexture_createFromFile("assets/but/tower1_1.png"
    , NULL);
    gs->tower_texture[1] = sfTexture_createFromFile("assets/but/tower1_2.png"
    , NULL);
    gs->tower_texture[2] = sfTexture_createFromFile("assets/but/tower1_3.png"
    , NULL);
}