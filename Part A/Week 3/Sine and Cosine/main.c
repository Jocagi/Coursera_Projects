#include<stdio.h> //Standard library
#include<math.h> //has  sin() and cos()

//C program that has a function that prints a table of values for sine and cosine between (0, 1).

int main(void)
{

//For loop that prints the table of values
for(double i = 0; i <= 1.0; i+=0.01)
{
 printf("sin( %lf ) = %lf \n", i, sin(i) ); //Sin function
 printf("cos( %lf ) = %lf \n\n", i, cos(i) ); //Cos function
}

//End of program
printf("\n+++++++\n");
return 0;
}
