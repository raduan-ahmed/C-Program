/*
The void data type in C is used to specify that no value is present.
It does not provide a result value to its caller.
It has no values and no operations. It is used to represent nothing.
Void is used in multiple ways as function return type, function arguments as void, and pointers to void.
*/

#include <stdio.h>

int main()
{
    int val = 30;
    void* ptr = &val;
    printf("%d", *(int*)ptr);
    return 0;
}