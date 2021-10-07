#include "main.h"

/**
 *print_alphabet - alphabet repet x10
 *
 *return 0
 *
 */
void print_alphabet_x10(void)
{
int c;
char d;
for (c = 1; c <= 10; c++)
{
for (d = 'a'; d <= 'z'; d++)
{
_putchar(c);
}
_putchar('\n');
}
}
