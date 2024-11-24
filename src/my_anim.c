/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** repertoriate all my animations
*/

#include "my.h"

void enemy_anim(anim_t *enemy)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(enemy->clock)) > 0.06) {
        enemy->rect.left = enemy->x * 120;
        enemy->x++;
        if (enemy->rect.left >= 844) {
            enemy->x = 0;
        }
        sfClock_restart(enemy->clock);
        sfSprite_setTextureRect(enemy->sprite, enemy->rect);
    }
}

// void anim_all(engine_t *game)
// {
    
// }