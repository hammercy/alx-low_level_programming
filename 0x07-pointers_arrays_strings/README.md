function that fills memory with a constant byte.
prototype: char *_memset(char *s, char b, unsigned int n);
The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
Returns a pointer to the memory area s
FYI: The standard library provides a similar function: memset. Run man memset to learn more.

1-memcpy.c
Prototype: char *_memcpy(char *dest, char *src, unsi	gned int n);
The _memcpy() function copies n bytes from memory area src to memory area dest
Returns a pointer to dest