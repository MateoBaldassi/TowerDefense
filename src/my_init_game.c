/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** file where alls func are initialized
*/

#include "my.h"

highscore_t init_highscore(highscore_t highscore)
{
    highscore.score = 0;
    highscore.scoring = sfText_create();
    highscore.vector.x = 20;
    highscore.vector.y = -400;
    sfText_setPosition(highscore.scoring, highscore.vector);
    sfText_setString(highscore.scoring, "SCORE: ");
    return (highscore);
}

map_t init_map(map_t map)
{
    map.base_map = create_map("./config/map1.txt");
    map.t_orkb = sfTexture_createFromFile("assets/_PNG/orkb.png", NULL);
    map.t_orks = sfTexture_createFromFile("assets/_PNG/orks.png", NULL);
    map.t_orkt = sfTexture_createFromFile("assets/_PNG/orkt.png", NULL);
    map.texture = sfTexture_createFromFile("assets/T_g.png", NULL);

}

int init_game_scene(game_scene_t *scene)
{
    scene->map = init_map(scene->map);
    if (scene->map.base_map == NULL || scene->map.texture == NULL)
        return (84);
    return (0);
}

engine_t init_all(engine_t gameset)
{
    gameset.mode = (sfVideoMode){1920, 1080, 32};
    gameset.scene = 0;
    gameset.window = sfRenderWindow_create(gameset.mode, "Window", \
                                    sfResize | sfClose, NULL);
    return (gameset);
}