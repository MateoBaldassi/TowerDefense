/*
** EPITECH PROJECT, 2020
** my_putchar
** File description:
** display char
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putchar_error(char c)
{
    write(2, &c, 1);
}