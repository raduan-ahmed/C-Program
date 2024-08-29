// C program to print Integer data types.
/*
Range: (-128 to 127) or (0 to 255)
Size: 1 byte
Format Specifier: %c
*/

#include <stdio.h>
 
int main()
{
    char a = 'a';
    char c;
 
    printf("Value of a: %c\n", a);
 
    a++;
    printf("Value of a after increment is: %c\n", a);
 
                                
    c = 99;                         // c is assigned ASCII values

 
    printf("Value of c: %c", c);
 
    return 0;
}