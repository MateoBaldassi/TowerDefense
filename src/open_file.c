/*
** EPITECH PROJECT, 2021
** my_runner
** File description:
** open a configuration file
*/

/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** map.c
*/

#include "my.h"

char *return_buf_file(char *path)
{
    FILE *file;
    char *string = NULL;
    int n = 0;

    file = fopen(path, "r");
    getline(&string, &n, file);
    my_puts(string);
}
