/*
** EPITECH PROJECT, 2020
** my_struct
** File description:
** struct
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

#ifndef MY_STRUCT
#define MY_STRUCT

typedef struct anim
{
    sfIntRect rect;
    sfTexture *texture;
    sfSprite *sprite;
    sfClock *clock;
    sfVector2f vector;
    sfVector2f position;
    int display;
    int x;
}anim_t;

typedef struct background
{
    sfTexture *texture;
    sfSprite *sprite;
}background_t;

typedef struct button
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f position;
    sfIntRect rect;
}button_t;

typedef struct tower
{
    sfSprite *sprite;
    int money;
    int price;
    int upgrade;
    sfVector2f vect;
}tower_t;

typedef struct shop
{
    tower_t tower;
    tower_t tower1_1;
    tower_t tower1_2;
    tower_t tower1_3;
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f vect;
}shop_t;

typedef struct map
{
    sfTexture *texture;
    int **base_map;
    int *path;
    char *path_x_y;
    sfVector2f start;
    sfVector2f end;
    sfTexture *t_orkb;
    sfTexture *t_orks;
    sfTexture *t_orkt;
}map_t;
typedef struct enemy
{
    int health;
    int speed;
    sfIntRect rect;
    sfSprite *sprite;
    sfClock *clock;
    sfVector2f position;
    sfFloatRect hit_box;
    int display;
    int x;
}enemy_t;

typedef struct wave
{
    int nb_enemy;
    enemy_t *enemy;
}wave_t;

typedef struct highscore
{
    int score;
    sfText *scoring;
    sfVector2f vector;
}highscore_t;

typedef struct game_scene
{
    highscore_t highscore;
    wave_t wave;
    map_t map;
    shop_t shop;
    sfTexture *tower_texture[12];
}game_scene_t;

typedef struct menu_scene
{
    sfMusic *song;
    button_t play;
    button_t option;
    button_t quit;
    background_t bg;
}menu_scene_t;

typedef struct end_scene
{
    sfMusic *song;
    background_t bg;
    button_t reset;
    button_t menu;
}end_scene_t;

typedef struct option_scene
{
    background_t bg;
    button_t back;
    button_t sound;
}option_scene_t;

typedef struct file_enemy
{
    int nb_of_enemy;
    char *buffer;
    char *file_name;
}file_enemy_t;

typedef struct tile
{
    int tile;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f vector;
    sfIntRect rect;
    int x;
    int y;
}tile_t;

typedef struct engine
{
    sfVideoMode mode;
    sfRenderWindow *window;
    sfEvent event;
    game_scene_t scene_game;
    menu_scene_t scene_menu;
    end_scene_t scene_end;
    option_scene_t scene_option;
    file_enemy_t enemy_file;
    int scene;
    int sound;
    int music_on_off;
}engine_t;

#endif /* !MY_STRUCT */