/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** my_getnbr_char.c
*/

int to_number(char c)
{
    int sign = 1;
    double result = 0;

    result = result * 10 + c - 48;
    if ((result*sign) > 2147483647 || (result*sign) < -2147483648)
        return (0);
    else {
        return (result*sign);
    }
    return (0);
}