// c function to count number of ones in binary number
// take a number from the user
// get the size of (num) to calc bytes number
// get the number of bits by bytes*8
// make a loop to search for ones inside the number bits

#include <stdio.h>

int main() {
  int num, ones, i;

  /* Input number from user */
  printf("Enter any number: ");
  scanf("%d", &num);
  ones = 0;

  int size = sizeof(num) * 8;
  printf("size of int = %d ", size);
  for (i = 0; i < size; i++) {
    /* If LSB is set then increment ones otherwise zeros */
    if (num & 1)
      ones++;
    /* Right shift bits of num to one position */
    num >>= 1;
  }

  printf("Total one bit is %d", ones);

  return 0;
}

/* // c function to take an integer number and calculate it's square root
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
  printf("Square root of %d =  %0.3f", num, squareRoot(num));

  return 0;
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
// c program to sum the digits of an input number
// example input is (123) so 123 %10 = 3 (reminder)
// (12) % 10 = 2 (reminder) and (1) is a result
// sum += reminder;
int main()
{
    int num, sum = 0, reminder ;

    printf("Enter a number\n");

    scanf ("%d", &num);
    while (num != 0 )
    {
        reminder = num %10;
        sum += reminder ;
        num = num /10;
    }
    printf("Sum of digits of a number = %d\n", sum);

    return 0;
}
 */
