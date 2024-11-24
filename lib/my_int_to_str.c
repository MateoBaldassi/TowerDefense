/*
** EPITECH PROJECT, 2020
** my_int_to_str
** File description:
** put an int on an string
*/

#include <stdlib.h>

int my_putstr(char const *str);

int count_char_int(int nb)
{
    int count = 0;

    if (nb < 0) {
        nb = nb * -1;
        count++;
    }
    while (nb > 9) {
        nb = nb / 10;
        count++;
    }
    count++;
    return (count);
}

char *my_int_to_str(int nb, char *nb_str, int i)
{
    if (nb < 0) {
        nb = nb * -1;
        nb_str[i] = '-';
        i++;
    }
    if (nb > 9) {
        my_int_to_str(nb / 10, nb_str, i - 1);
    }
    nb_str[i] = nb % 10 + 48;
    i++;
    return (nb_str);
}

char *my_int_on_str(int nb)
{
    char *nb_str = malloc(sizeof(char) * count_char_int(nb) + 1);
    int i = count_char_int(nb) - 1;

    return (my_int_to_str(nb, nb_str, i));
}