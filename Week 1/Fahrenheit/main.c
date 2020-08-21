#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fahrenheit, celcius;

    printf("Please enter fahrenheit as an integer: ");
    scanf("%d", &fahrenheit);
    celcius = (fahrenheit - 32)/1.8;
    printf("\n\n %d fahrenheit is %d celcius.\n\n", fahrenheit, celcius);
    return 0;
}
