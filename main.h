#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int handle(char format, va_list list);
int _printf(const char *format, ...);
void swap(char *x, char *y);
char *reverse(char *buffer, int i, int j);
char *num_to_string(int value, char* buffer, int base);

#endif
