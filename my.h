/*
** EPITECH PROJECT, 2022
** printf
** File description:
** include
*/

#include <stdarg.h>

#ifndef MY_H_
    #define MY_H_

typedef struct printf {
    char flag;
    int (*func_ptr)(va_list);
}printf_s;

int flag_u(va_list);
int flag_plus(va_list);
int flag_di(va_list);
int flag_b(va_list);
int flag_x_maj(va_list);
int flag_x(va_list);
int flag_o(va_list);
int flag_s(va_list);
int flag_c(va_list);
int flag_p(va_list);
int flag_f(va_list);
int flag_e(va_list);
int flag_e_up(va_list);
int flag_s_up(va_list list);

int my_numbin(unsigned int);
int my_numhexa(unsigned int);
int my_numhexa_min(unsigned int);
int my_numoct(unsigned int);
int my_compute_power_rec(int, int);
int my_putchar(char);
int my_putstr(char const *);
int my_put_float(double, int);
int my_put_nbr(int);
int my_put_nbrsign(int);
int my_strlen(char const *);
int my_unsigned_put_nbr(unsigned int);
int print_addressptr(void *);
int print_case_min(int);
int print_prct(void);
int print_scientific(double, int, int);
int unprintable_char(char *);
int my_numlen(int);

#endif /* !MY_H_ */
