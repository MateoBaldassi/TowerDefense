/*
** EPITECH PROJECT, 2020
** my_runner
** File description:
** all my scenes
*/

#include "my.h"

void menu_scene(engine_t scene, int *nb_scene)
{
    init_menu_scene(&scene.scene_menu);
    sfMusic_play(scene.scene_menu.song);
    sfMusic_setLoop(scene.scene_menu.song, sfTrue);
    while (*nb_scene == 0) {
        event_menu(&scene, nb_scene);
        sfRenderWindow_clear(scene.window, sfBlack);
        display_menu_scene(scene.scene_menu, scene);
        sfRenderWindow_display(scene.window);
    }
}

void game_scene(engine_t scene, int *nb_scene)
{
    init_game_scene(&scene.scene_game);
    while (*nb_scene == 1 && sfRenderWindow_isOpen(scene.window)) {
        event_main(&scene, nb_scene);
        sfRenderWindow_clear(scene.window, sfBlack);
        display_main_scene(scene.scene_game, scene);
        sfRenderWindow_display(scene.window);
    }
}

void end_scene(engine_t scene, int *nb_scene)
{
    init_end_scene(&scene.scene_end);
    while (*nb_scene == 2) {
        event_end(&scene, nb_scene);
        display_end_scene(scene.scene_end, scene);
    }
}

void option_scene(engine_t scene, int *nb_scene)
{
    init_option_scene(&scene.scene_option);
    while (*nb_scene == 4) {
        event_option(&scene, nb_scene);
        display_option_scene(scene.scene_option, scene);
    }
}

void scene_gestioner(engine_t scene, int nb_scene)
{
    if (nb_scene == 0)
        menu_scene(scene, &nb_scene);
    if (nb_scene == 1)
        game_scene(scene, &nb_scene);
    if (nb_scene == 2)
        end_scene(scene, &nb_scene);
    if (nb_scene == 4)
        option_scene(scene, &nb_scene);
}