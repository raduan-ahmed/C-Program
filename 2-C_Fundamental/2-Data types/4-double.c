/*
Range: 1.7E-308 to 1.7E+308
Size: 8 bytes
Format Specifier: %lf
*/

#include <stdio.h>
 
int main()
{
    double a = 1563123.00;
    double b = 12.29458123;
    double c = 231252312.123123;
 
    printf("%lf\n", a);
 
    printf("%lf\n", b);
 
    printf("%lf", c);
 
    return 0;
}