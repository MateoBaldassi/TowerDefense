/*
** EPITECH PROJECT, 2020
** test
** File description:
** test
*/

#include <stdlib.h>

int my_strlen(char const *str);

int count_arg(char *str)
{
    int separator = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ' || str[i] == '\t')
            separator++;
    }
    return (separator);
}

char *my_strncpy_n(char *dest, char *str, int index, int n)
{
    int i = 0;

    for (; i < n; i++, index++)
        dest[i] = str[index];
    dest[i] = '\0';
    return (dest);
}

int count_word_length(char *str, int index)
{
    int size = 0;

    while (str[index] && str[index] != ' ' && str[index] != '\t') {
        size++;
        index++;
    }
    return (size);
}

char **my_str_to_word_array(char *str)
{
    int word_length = 0;
    int i = 0;
    int j = 0;
    char **array = malloc(sizeof(char *) * (count_arg(str) + 2));

    for (; i < my_strlen(str); i = i + word_length + 1, j++) {
        word_length = count_word_length(str, i);
        array[j] = malloc(sizeof(char) * (word_length + 1));
        array[j] = my_strncpy_n(array[j], str, i, word_length);
    }
    array[j - 1][my_strlen(array[j - 1])] = '\0';
    array[j] = NULL;
    return (array);
}