/*
** EPITECH PROJECT, 2020
** my_puts
** File description:
** my_puts function
*/

void my_putchar(char c);

int my_putstr(char const *str);

void my_puts(char *str)
{
    my_putstr(str);
    my_putchar('\n');
}