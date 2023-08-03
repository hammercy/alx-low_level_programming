#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

typedef unsigned int uint;
typedef unsigned long int ulint;
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
char *_dtob(ulint inum, char *iptr);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
#endif
