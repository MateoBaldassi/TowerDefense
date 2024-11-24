/*
** EPITECH PROJECT, 2021
** my_runner
** File description:
** init my menu object (like sound sprite etc...)
*/

#include "my.h"

button_t init_button(button_t button, char *name_texture, int x, int y)
{
    button.texture = sfTexture_createFromFile(name_texture, NULL);
    button.sprite = sfSprite_create();
    button.position = (sfVector2f){x, y};
    button.rect = (sfIntRect){x, y, 200, 200};

    sfSprite_setTexture(button.sprite, button.texture, sfTrue);
    sfSprite_setPosition(button.sprite, button.position);
    return (button);
}

background_t init_background(background_t background, char *name_texture)
{
    background.texture = sfTexture_createFromFile(name_texture, NULL);
    background.sprite = sfSprite_create();

    sfSprite_setTexture(background.sprite, background.texture, sfTrue);
    return (background);
}

int init_menu_scene(menu_scene_t *scene)
{
    scene->play = init_button(scene->play, "assets/but/play.png", 850, 200);
    scene->option = init_button(scene->play, "assets/but/opt.png", 850, 400);
    scene->quit = init_button(scene->play, "assets/but/quit.png", 850, 600);
    scene->bg = init_background(scene->bg, "assets/menu.png");
    return (0);
}