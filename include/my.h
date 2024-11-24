/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** header
*/

#ifndef MY
#define MY

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include "my_struct.h"

#define ERROR_SYNTAX "syntax error"
#define ERROR_MESSAGE "error"

static const char **assets{
"assets/but/tower1_1.png", \
"assets/but/tower1_2.png", \
"assets/but/tower1_3.png", \
"assets/but/tower2_1.png", \
"assets/but/tower2_2.png", \
"assets/but/tower2_3.png", \
"assets/but/tower3_1.png", \
"assets/but/tower3_2.png", \
"assets/but/tower3_3.png"};

int my_getnbr(char *str);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int n);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
char *my_strdup(char const *src);
char **my_str_to_word_array(char *str);
int my_show_word_array(char * const *tab);
int count_word_length(char *str, int index);
int count_arg(char *str);
char *my_strncpy_n(char *dest, char *str, int index, int n);
int my_isneg(int n);
int nb_neg(int nb);
int verify_len_nb(char *str);
int verify_sign(char *str, int i, int sign);
int verif_str(char *str, char const *to_find, int n);
int my_strlen_n(char const *str, int n);
char *my_strncpy(char *dest, char const *src, int n);
void my_putchar_error(char c);
void my_puts(char *str);
int error(char *opt, char *base, char *read_size);
int my_atoi(char *str);
int addition(int val_1, int val_2);
int subtraction(int val_1, int val_2);
int multiplication(int val_1, int val_2);
int division(int val_1, int val_2);
int modulo(int val_1, int val_2);
char verify_operator(char opt);
int verify_zero(char *str);
int count_char(char *str, char to_find);
int count_number_minus(char *str, int index);
int count_number_more(char *str, int index);
int my_getnbr_n(char *str, int n);
int my_power(int nb, int p);
int verify_calc(char *calc, char *opt, char *base);
int count_char_int(int nb);
char *my_int_to_str(int nb, char *nb_str, int i);
char *my_int_on_str(int nb);
char *convert_nb(char *calc, char *base, char *base_opp);
char convert_nb_str(char c, char *base);
char convert_opp_str(char c, char *base_opp);
char *display_nb_on_base(int nb, char *base, char *base_opp);
char *my_int_on_str(int nb);
char reverse_convert_nb(char c, char *base);
char reverse_convert_opp(char c, char *base_opp);
void do_events(engine_t *myev);
int to_number(char c);
anim_t init_narout(anim_t narout, char *name_texture);
void display_all(engine_t draw);
void narout_anim(anim_t *narout);
anim_t init_paralax(anim_t paralax, char *name_texture, int speed);
void anim_all(engine_t *game);
engine_t init_all(engine_t gameset);
void destroy_all(engine_t base);
void reset_duck(anim_t *duck);
int narout_jump_anim(anim_t *narout);
int main_scene(game_scene_t scene, int nb_scene, sfEvent event);
background_t init_background(background_t background, char *name_texture);
button_t init_button(button_t button, char *name_texture, int x, int y);
int init_menu_scene(menu_scene_t *scene);
int init_game_scene(game_scene_t *scene);
int init_end_scene(end_scene_t *scene);
int init_option_scene(option_scene_t *scene);
int init_enemy(engine_t *enemy);
void scene_gestioner(engine_t scene, int nb_scene);
void event_menu(engine_t *myev, int *nb_scene);
void event_main(engine_t *myev, int *nb_scene);
void event_end(engine_t *myev, int *nb_scene);
void display_option_scene(option_scene_t draw, engine_t engine);
void display_end_scene(end_scene_t draw, engine_t engine);
void display_menu_scene(menu_scene_t draw, engine_t engine);
void display_main_scene(game_scene_t draw, engine_t engine);
void event_option(engine_t *myev, int *nb_scene);
sfSprite *tile_grass(game_scene_t *map, int j, int i, tile_t tile);
sfSprite *tile_path_v(game_scene_t *map, int j, int i, tile_t tile);
sfSprite *tile_path_h(game_scene_t *map, int j, int i, tile_t tile);
sfSprite *tile_path_r(game_scene_t *map, int j, int i, tile_t tile);
int **create_map(char *map);
sfSprite *tile_tree(game_scene_t *map, int j, int i, tile_t tile);
void draw_map(sfRenderWindow *window, game_scene_t game_scene);

#endif /* !MY */