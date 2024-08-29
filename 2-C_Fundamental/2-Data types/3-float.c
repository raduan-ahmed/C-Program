/*
Range: 1.2E-38 to 3.4E+38
Size: 4 bytes
Format Specifier: %f
*/

#include <stdio.h>
 
int main()
{
    float a = 7.0f;
    float b = 4.5f;
 
    // 2x10^-4
    float c = 2E-4f;
    printf("%f\n", a);
    printf("%f\n", b);
    printf("%f", c);
 
    return 0;
}