/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** destroy all value
*/

#include "my.h"

void destroy_all(engine_t base)
{
    sfRenderWindow_destroy(base.window);
}
