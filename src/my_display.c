/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** display alls sprites
*/

#include "my.h"

void display_main_scene(game_scene_t draw, engine_t engine)
{
    draw_map(engine.window, draw);
}

void display_menu_scene(menu_scene_t draw, engine_t engine)
{
    sfRenderWindow_drawSprite(engine.window, draw.bg.sprite, NULL);
    sfRenderWindow_drawSprite(engine.window, draw.play.sprite, NULL);
    sfRenderWindow_drawSprite(engine.window, draw.option.sprite, NULL);
    sfRenderWindow_drawSprite(engine.window, draw.quit.sprite, NULL);
}

void display_end_scene(end_scene_t draw, engine_t engine)
{
    sfRenderWindow_drawSprite(engine.window, draw.bg.sprite, NULL);
    sfRenderWindow_drawSprite(engine.window, draw.menu.sprite, NULL);
    sfRenderWindow_drawSprite(engine.window, draw.reset.sprite, NULL);
}

void display_option_scene(option_scene_t draw, engine_t engine)
{
    sfRenderWindow_drawSprite(engine.window, draw.bg.sprite, NULL);
    sfRenderWindow_drawSprite(engine.window, draw.back.sprite, NULL);
    sfRenderWindow_drawSprite(engine.window, draw.sound.sprite, NULL);
}