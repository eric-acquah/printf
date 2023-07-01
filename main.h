#ifndef PORTIA_JOE
#define PORTIA_JOE

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>


int _printf(const char *format, ...);

int _print(char letter);

int print_words(char *word);

int print_number(int num, unsigned int size, int base, int sign);

void *resize(unsigned int size, unsigned int elem, void *old);

#endif
