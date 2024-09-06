#include <stdio.h>

int main() {
  int myAge = 25;
  int votingAge = 18;
  
  printf("%d", myAge >= votingAge); // Returns 1 (true), meaning 25 year olds are allowed to vote!
  printf("\n");
  
  if (myAge >= votingAge) {
    printf("Old enough to vote!");
  } else {
    printf("Not old enough to vote.");
  }
  return 0;
}