/*Variables declared outside the functions with the keyword global are called global variables.
Global variables can be accessed by multiple functions defined in the program.*/

#include <stdio.h>
float pi = 3.1416;      //global variable
int circle ()
{
    int r = 10;         //local variable
    double area;
    area = pi*r*r;
    return area;
}
void main()
{
    printf("Area of the circle is = %d",circle());
}