/*
** EPITECH PROJECT, 2021
** my_runner
** File description:
** init death scene for restart or quit
*/

#include "my.h"

int init_end_scene(end_scene_t *scene)
{
    scene->bg = init_background(scene->bg, "assets/gameover.jpg");
    scene->menu = init_button(scene->menu, "assets/home.png", 400, 600);
    scene->reset = init_button(scene->reset, "assets/restart.png", 200, 600);
    scene->song = sfMusic_createFromFile("assets/death.ogg");
    return (0);
}

int init_option_scene(option_scene_t *scene)
{
    scene->back = init_button(scene->back, "assets/but/restart.png", 400, 800);
    scene->sound = init_button(scene->sound, "assets/but/volume.png", 400, 400);
    scene->bg = init_background(scene->bg, "assets/Menu.png");
    return (0);
}