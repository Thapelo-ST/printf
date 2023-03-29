#ifndef MAIN_H
#define MAIN_H
/*needed headers*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/*functions declaration*/
int _printf(const char *format, ...);
int _putchar(char c);
int _print_int(int n);
int _print_str(char *s);
void _prnt_b(unsigned int n);
int _prnt_uint(unsigned int n);
int _prnt_oct(unsigned int n);
void _prnt_hex(unsigned long int n, int uppercase);
void _prnt_S(char *s);
void _puts(char *str);
void _prnt_uhex(unsigned int n, int is_upper);
void _prnt_ints(int n);
void _print_octal(unsigned int n);
void _prnt_short_int(short int n);
void _prnt_l(long n);
void _print_hex_short(unsigned short int n, int uppercase);
void _prnt_ul(unsigned long n);
void _print_hex_long(unsigned long int n, int uppercase);
void _print_octal_short(unsigned short int n);
void _print_octal_long(unsigned long int n);
void _prnt_int_mod(char len, int n);
void _prnt_uint_mod(char len, unsigned int n);
void _prnt_us(unsigned short n);


#endif
