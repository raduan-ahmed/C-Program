//In C, the bool type is not a built-in data type, like int or char.
#include <stdio.h>
#include <stdbool.h>  // Import the boolean header file 

int main() {
  bool isProgrammingFun = true;
  bool isFishTasty = false;
  printf("%d\n", isProgrammingFun);  // Returns 1 (true)
  printf("%d", isFishTasty);         // Returns 0 (false)
  printf("\n");
  printf("--------------");
  printf("\n");
  printf("%d", 10 > 9);  // Returns 1 (true) because 10 is greater than 9
  return 0;
}