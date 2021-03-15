/*
** EPITECH PROJECT, 2021
** test unitaire
** File description:
** my_strlen
*/

int my_strlen(const char *str)
{
    int count = 0;
    while (str[count++]);
    return count-1;
}