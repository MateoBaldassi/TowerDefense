/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** bootstrap my_hunter
*/

#include "my.h"

void print_help(void)
{
    my_putstr("Mon Narout Run\n\n \
    Sauve Sassouk pour le ramener a Kanoah\n \
    PS : Tout bug j'ai pas reussis a faire mes menus du coup c'est pa bo\n \
    Du coup j'ai fait les attendus de base donc rip\n \
    TOUCHES:\n \
    aLt f4: pOuR gAgNeR STEVE sUr SmAsH bRoS\n");
}

int main(void)
{
    int nb_scene = 0;

    engine_t gameset = init_all(gameset);
    if (!gameset.window)
        return EXIT_FAILURE;
    sfRenderWindow_setFramerateLimit(gameset.window, 60);
    while (sfRenderWindow_isOpen(gameset.window)) {
        sfRenderWindow_clear(gameset.window, sfBlack);
        scene_gestioner(gameset, nb_scene);
    }
    destroy_all(gameset);
    return EXIT_SUCCESS;
}