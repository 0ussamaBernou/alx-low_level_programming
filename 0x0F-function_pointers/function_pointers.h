#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void _putchar(char ch);
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
