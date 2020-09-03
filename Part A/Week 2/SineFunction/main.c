#include <stdio.h>
#include <math.h>

int main()
{
    double angle;
    double result;

    printf("Input value (radians): ");
    scanf("%lf", &angle );

    result = sin(angle);

    printf("Sin(%lf) = %lf\n\n",angle, result);
    return 0;
}
