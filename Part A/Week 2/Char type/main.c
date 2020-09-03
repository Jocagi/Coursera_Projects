#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = 'a';

    printf("C in ASCII is %d\n", c);
    printf("C the character is %c\n", c);

    printf("Three consecutive chars are: %c %c %c\n", c, c+1, c+2);
    printf("Three bell rings chars are: %c %c %c\n", '\a', '\a', '\a');

    return 0;
}
