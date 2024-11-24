/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** do alls my events
*/

#include "my.h"

void event_main(engine_t *myev, int *nb_scene)
{
    while (sfRenderWindow_pollEvent(myev->window, &myev->event)) {
        if (myev->event.type == sfEvtClosed)
            sfRenderWindow_close(myev->window);
    }
}

void event_menu(engine_t *myev, int *nb_scene)
{
    while (sfRenderWindow_pollEvent(myev->window, &myev->event)) {
        if (myev->event.type == sfEvtClosed)
            sfRenderWindow_close(myev->window);
        if (myev->event.type == sfEvtMouseButtonPressed) {
            if (sfIntRect_contains(&myev->scene_menu.quit.rect, \
            myev->event.mouseButton.x, myev->event.mouseButton.y))
                sfRenderWindow_close(myev->window);
            if (sfIntRect_contains(&myev->scene_menu.play.rect, \
            myev->event.mouseButton.x, myev->event.mouseButton.y))
                *nb_scene = 1;
            if (sfIntRect_contains(&myev->scene_menu.option.rect, \
            myev->event.mouseButton.x, myev->event.mouseButton.y))
                *nb_scene = 4;
        }
    }
}

void event_end(engine_t *myev, int *nb_scene)
{
    while (sfRenderWindow_pollEvent(myev->window, &myev->event)) {
        if (myev->event.type == sfEvtClosed)
            sfRenderWindow_close(myev->window);
        if (myev->event.type == sfEvtMouseButtonPressed) {
            if (sfIntRect_contains(&myev->scene_end.menu.rect, \
            myev->event.mouseButton.x, myev->event.mouseButton.y))
                *nb_scene = 0;
            if (sfIntRect_contains(&myev->scene_end.reset.rect, \
            myev->event.mouseButton.x, myev->event.mouseButton.y))
                *nb_scene = 1;
        }
    }
}

void event_option(engine_t *myev, int *nb_scene)
{
    while (sfRenderWindow_pollEvent(myev->window, &myev->event)) {
        if (myev->event.type == sfEvtClosed)
            sfRenderWindow_close(myev->window);
        if (myev->event.type == sfEvtMouseButtonPressed) {
            if (sfIntRect_contains(&myev->scene_option.back.rect, \
            myev->event.mouseButton.x, myev->event.mouseButton.y))
                    *nb_scene = 1;
            if (sfIntRect_contains(&myev->scene_option.sound.rect, \
            myev->event.mouseButton.x, myev->event.mouseButton.y)) {
                    if (myev->sound == 1)
                        myev->sound = 0;
                    else
                        myev->sound = 1;
                }
        }
    }
}