#include <stdio.h>
#include <stdlib.h>

int main()
{
    int miles, yards;
    double kilometers;

    printf("\nInput miles:");
    scanf("%d", &miles);

    printf("\nInput yards:");
    scanf("%d", &yards);

    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("\nA marathon is %lf kilometers.\n\n", kilometers);

    return 0;
}
