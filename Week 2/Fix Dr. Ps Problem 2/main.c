#include <stdio.h>
#define PI 3.14159265

int main(void)
{
    int radius;
    printf("Enter radius:\n");
    scanf("%d", &radius);
    printf("Volume is: %lf \n\n", 4/3.0 * PI * radius * radius * radius);
    return 0;
}
