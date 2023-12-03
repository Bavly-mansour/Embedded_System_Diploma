// c function to take an integer number and calculate it's square root
#include <math.h>
#include <stdio.h>
float squareRoot(int num) {
  float result = sqrt(num);
  return result;
}
int main() {
  int num;
  float result;
  printf("Enter an integer number :");
  scanf("%d", &num);
  printf("Square root of %d =  %0.2f", num, squareRoot(num));

  return 0;
}
