/*
** EPITECH PROJECT, 2022
** printf
** File description:
** flags str char and nbr
*/

#include "my.h"
#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int flag_c(va_list list)
{
    return (my_putchar(va_arg(list, int)));
}

int my_putstr(char const *str)
{
    int index = 0;

    for (; str[index] != '\0'; index += 1) {
        my_putchar(str[index]);
    }
    return (index);
}

int flag_s(va_list list)
{
    return (my_putstr(va_arg(list, char *)));
}

int print_prct(void)
{
    write(1, "%", 1);
    return (1);
}
