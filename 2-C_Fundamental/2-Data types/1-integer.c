// C program to print Integer data types.
/*
Range:  -2,147,483,648 to 2,147,483,647
Size: 4 bytes
Format Specifier: %d
*/

#include <stdio.h>
 
int main()
{
    int a = 12;                              // Integer value with positive data.
 
    int b = -7;                             // integer value with negative data.
 
    int c = 89U;                            // U or u is Used for Unsigned int in C.
 
    long int d = 99998L;                    // L or l is used for long int in C.
 
                                            
    printf("Integer value with positive data: %d\n", a);
    printf("Integer value with negative data: %d\n", b);
    printf("Integer value with an unsigned int data: %u\n",c);
    printf("Integer value with an long int data: %ld", d);
 
    return 0;
}


