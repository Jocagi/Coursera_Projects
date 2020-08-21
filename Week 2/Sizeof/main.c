#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b = 7, c = 6;
    double average = 0.0;
    char ch = 'e';

    printf("\nOn my sytem\n");
    printf("int is %lu bytes.\n", sizeof(int));
    printf("long int is %lu bytes.\n", sizeof(long int));
    printf("char is %lu bytes.\n", sizeof(char));
    printf("double is %lu bytes.\n", sizeof(double));
    printf("long double is %lu bytes.\n", sizeof(long double));
    printf("float is %lu bytes.\n", sizeof(float));

    return 0;
}
