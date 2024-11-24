/*
** EPITECH PROJECT, 2020
** count_char
** File description:
** count char
*/

int count_char(char *str, char to_find)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == to_find)
            count++;
    }
    return (count);
}

int count_number_more(char *str, int index)
{
    int count = 0;

    for (; str[index] != '\0'; index++) {
        if (str[index] > '9' || str[index] < '0')
            break;
        count++;
    }
    return (count);
}

int count_number_minus(char *str, int index)
{
    int count = 0;

    for (; index >= 0; index--) {
        if (str[index] > '9' || str[index] < '0')
            break;
        count++;
    }
    return (count);
}

int count_(char c, char *to_find)
{
    int i = 0;
    int verif = 0;

    for (; to_find[i] != '\0'; i++) {
        if (to_find[i] == c)
            verif = 1;
    }
    if (verif == 1)
        return (0);
    else
        return (1);
}