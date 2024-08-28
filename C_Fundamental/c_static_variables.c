/*Variables declared with a keyword static are static variables,
whose lifetime is throughout the program run time*/

#include <stdio.h>
int cal ()
{
    static int sum = 0;         //static variable
    sum++;
    return sum;
}
void main()
{
    printf("sum is = %d \n",cal());
    printf("sum is = %d \n",cal());
    printf("sum is = %d \n",cal());
    printf("sum is = %d \n",cal());
}