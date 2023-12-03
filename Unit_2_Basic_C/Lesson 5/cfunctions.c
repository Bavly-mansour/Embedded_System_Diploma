#include <stdio.h>
#include <string.h>
// C program to reverse the order of words inside string
int main() {
  // array words , get the string from the user
  char words[100];
  int i, j, len, start, end;

  printf("Please Enter a String :  ");
  gets(words);
  // get the length of the string by strlen()
  len = strlen(words);
  end = len - 1;
  // the last index of the array is endIndex = len -1

  printf("Reversed String : ");
  for (i = len - 1; i >= 0; i--) {
    if (words[i] == ' ' || i == 0) {
      if (i == 0) {
        start = 0;
      } else {
        start = i + 1;
      }
      for (j = start; j <= end; j++) {
        printf("%c", words[j]);
      }
      end = i - 1;
      printf(" ");
    }
  }

  return 0;
}

/* #include <stdio.h>
int reverse_array(int size, int a[], int b[]) {
  int i, j; // i = last index of array a[]
  for (i = size - 1, j = 0; i >= 0; i--, j++) {
    b[j] = a[i]; // swap the elements between arrays
  }
  printf("\n Array after reverse :");
  for (i = 0; i < size; i++) {
    printf("%d  ", b[i]);
  }
}
int main() {
  int size, i;
  int a[50], b[50];
  // get the array size
  printf("Enter the size of the array :");
  scanf("%d", &size);
  // get the array elements
  for (i = 0; i < size; i++) {
    printf("\nElements no %d = ", i + 1);
    scanf("%d", &a[i]);
  }
  // array before reverse
  printf("Array before reversing : \n");
  for (i = 0; i < size; i++) {
    printf("%d  ", a[i]);
  }
  reverse_array(size, a, b);
  return 0;
}
 */
/* // c function to sum numbers from 1 to 100 without loop
// using recursion : call the function inside its body
#include <stdio.h>
int sumFunction(int n) {
  int sum = 0;
  if (n != 0) {
    // n = 100 then add 100 to sumfunction and n--
    return n + sumFunction(n - 1);
  } else {
    return sum;
  }
}
int main() {
  int n = 100;
  printf("The summation of numbers from 1 to 100 = %d ", sumFunction(n));
  return 0;
} */

/* #include <stdio.h>
// c function to get the unique elements inside an array
// first get the size of the array
// then get the elements of the array
// for loop
int main() {
  int arr1[100], size, count = 0;
  int i, j, k;
  printf("Enter the number of inputs : ");
  scanf("%d", &size);
  for (i = 0; i < size; i++) {
    printf("element no.%d : ", i + 1);
    scanf("%d", &arr1[i]);
  }
  printf("\nThe unique elements found in the array are: \n");
  for (i = 0; i < size; i++) {
    count = 0;
    for (j = 0, k = size; j < k + 1; j++) {
      /*Increment the counter when the seaarch value is duplicate.*/
/*
if (i != j) {
  if (arr1[i] == arr1[j]) {
    count++;
  }
}
}
if (count == 0) {
printf("%d ", arr1[i]);
}
}
printf("\n\n");
}
*/
/*
#include <stdio.h>
// C function to revers digits in number
// get a number from the user , revrse the number by getting the
//  reminder of the input (1234) %10 is 4 => store in last digit and print
//  num /10 => (123) %10 is 12 => store in last digit and print
//  num /10 => (12) %10 is 2 => store in last digit and print
//  when num /10 is 0 => stop , and print
int reverse(int num) {
  int last_digit = 0;
  while (num != 0) {
    last_digit = num % 10;
    printf("%d ", last_digit);
    num = num / 10;
  }
}
int main() {
  int num, last_digit = 0;
  printf("Enter an integer number : ");
  scanf("%d", &num);
  reverse(num);
  return 0;
}
 */
/* #include <stdio.h>

int checkPrime(int num) {

  if (num == 0 || num == 1) {
    return 1;
  }

  for (int j = 2; j <= num / 2; ++j) {
    if (num % j == 0) {
      return 0;
    }
  }
}

int main() {

  int min, max, flag;
  printf("Enter two integer values for interval: minimum , maximum:\n");
  scanf("%d", &min);
  scanf("%d", &max);
  printf("\nCheck for prime numbers .. \n");
  for (int i = min + 1; i < max; ++i) {
    if (checkPrime(i)) { // isPrime = 0 when it is prime
      printf("%d , ", i);
    }
  }
  return 0;
}
 */
/*

#include <stdio.h>
// c program to calculate the power of a number
// use user defined function with recursion
// when you have base and exp ..
//  power = base * base ( exp times )
int calc_power(int base, int exp) {
  if (exp < 1) {
    return 1;
  }

  return base * calc_power(base, exp - 1);
}
int main() {
  int base, exp;
  printf("Enter integer base :\n");
  scanf("%d", &base);
  printf("Enter integer exp : \n");
  scanf("%d", &exp);
  printf("%d ^ %d = %d", base, exp, calc_power(base, exp));
}
 */
/*

#include <stdio.h>
void rev() {
  char c;
  scanf("%c", &c); // get the sentence
  if (c != '\n')   // check if the sentence is over !
  {
    rev(); // if sentence is not over yet call function and print letter
    printf("%c", c);
  }
}
int main() {
  printf("Enter a sentence :\n");
  // call function reverse , all work done inside rev ()
  rev();
  return 0;
}


// c program to calculate factorial using recursion
#include <stdio.h>
int factorial(int num) {
  int f = 1;
  for (int i = 1; i <= num; i++) {
    return num * factorial(num - 1);
  }
}
int main() {
  int num, fact;
  printf("Enter an integer number :\n");
  scanf("%d", &num);
  fact = factorial(num);
  printf("Factorial of %d  is %d", num, fact);
  return 0;
}

#include <stdio.h>
int main() {

  int n, c, k;
  printf("Enter an integer number : \n");
  scanf("%d", &n);
  printf("the number in binary is = ", n);
  for (c = 31; c >= 0; c--) {
    k = n >> c;
    if (k & 1)
      printf("1");
    else
      printf("0");
  }
  printf("\n");
  k = n >> 3;
  if (k & 1)
    printf(" 4th least bit is 1");
  else
    printf(" 4th least bit is 0");
  return 0;
}
#include <stdio.h>
// create c function to return the number in giver array
//c program to print the last element form array
int last_number (int size, int a[])
{
    int lastNum = a[size - 1];
    return lastNum;


}
int main ()
{
    int a [10], size, i, last ;
    printf("Enter size for the array :");
    scanf("%d", &size);
    for(i =0 ; i < size ; i++)
    {
        printf("Enter element no %d: ", i+1);
        scanf("%d", &a[i] );
    }
    printf("Array is : \n");
    for(i =0 ; i < size ; i++)
    {
        printf("%d ", a[i]);

    }
    last = last_number(size , a);
    printf ("\n last number : %d ", last);

}


// c function that return 0 if the number is a power of 3 otherwise return 1
// (except 3 power of zero)
#include <stdio.h>
int fun(int num) {
  if (num % 3 == 0) // the number is divisible by 3
    return 0;
  else
    return 1;
}
int main() {
  int num, result;
  printf("Enter an integer number :");
  scanf("%d", &num);
  fun(num);
  result = fun(num);
  if (result == 0) {
    printf(" %d ==> %d", num, result);

  } else
    printf(" %d ==> %d ", num, result);
  return 0;
}


#include <stdio.h>
int reverse_array (int size, int a[], int b[])
{
    int i, j ;  // i = last index of array a[]
    for (i = size -1, j =0 ; i >= 0 ; i--, j++)
    {
        b[j]= a [i]; // swap the elements between arrays

    }
    printf("\n Array after reverse :");
    for (i = 0 ; i < size ; i ++)
    {
        printf ("%d  ", b[i]);
    }

}
int main ()
{
    int size, i ;
    int a [50], b [50];
    //get the array size
    printf("Enter the size of the array :");
    scanf( "%d", &size );
    //get the array elements
    for (i =0 ; i < size ; i++)
    {
        printf("\nElements no %d = ", i+1);
        scanf("%d", &a[i]);
    }
    //array before reverse
    printf("Array before reversing : \n");
    for (i =0 ; i < size ; i++)
    {
        printf ("%d  ", a[i]);
    }
    reverse_array(size, a, b );
    return 0;

*/
/*#include <stdio.h>
#include <string.h>
int main() {
  // C program to swap 2 different sizes arrays
  //  first create 3 arrays with same size
  int arr1[10], arr2[10], arr3[10], i;
  // get the first array  of size 10
  printf("Enter the elements of array 1 : \n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &arr1[i]);
  }
  // get the second array of size 5
  printf("Enter the elements of array 2 : \n");
  for (i = 0; i < 5; i++) {
    scanf("%d", &arr2[i]);
  }
  printf("Arrays before swapping :\n");
  printf("\nArray 1 :");
  for (i = 0; i < 10; i++) {
    printf(" %d ", arr1[i]);
  }
  printf("\nArray 2 :");
  for (i = 0; i < 5; i++) {
    printf(" %d ", arr2[i]);
  }
  // swapping array 1 and array 2
  for (i = 0; i < 10; i++) {
    arr3[i] = arr1[i];
    arr1[i] = arr2[i];
    arr2[i] = arr3[i];
  }
  printf("\nArrays after swapping :\n");
  printf("\nArray 1 :");
  for (i = 0; i < 5; i++) {
    printf(" %d ", arr1[i]);
  }
  printf("\nArray 2 :");
  for (i = 0; i < 10; i++) {
    printf(" %d ", arr2[i]);
  }

  return 0;
}
*/

/*
//check the username
#include <stdio.h>
#include <string.h>
int main() {
  int result;
  char arr1[100], arr2[100];
  printf("Enter a string please : \n");
  gets(arr1);
  printf("Enter user name to check : \n ");
  gets(arr2);
  result = stricmp(arr1, arr2);
  if (result == 0) {
    printf("welcome !");
  } else
    printf("Sorry , your name does not match !");

  return 0;
}



#include <stdio.h>
int checkPrime(int n) {
  for (int i = 2; i < n; i++) {
    if (n % i == 0) { // n is divisible by i so it is not prime
      return 0;       // if function returned 0 so n is not a prime
    }
    return 1; // if function returned 1 so n is a prime
  }
}
int main() {
  int kk, isPrime;
  printf("Enter a number to check : \n");
  scanf("%d", &kk);
  if (kk == 1) {
    printf("one is not a prime !");
  } else {
    isPrime = checkPrime(kk);
    if (isPrime == 1) { // function returned 1 so n is a prime
      printf("%d is a prime number.\n", kk);
    } else // is function returned 0 so n is not a prime
      printf("%d is not a prime number ", kk);
  }
  return 0;
}
#include <stdio.h>

int checkPrime(int num) {

  if (num == 0 || num == 1) {
    return 1;
  }

  for (int j = 2; j <= num / 2; ++j) {
    if (num % j == 0) {
      return 0;
    }
  }
}

int main() {

  int min, max, flag;
  printf("Enter two integer values for interval: minimum , maximum:\n");
  scanf("%d", &min);
  scanf("%d", &max);
  printf("\nCheck for prime numbers .. \n");
  for (int i = min + 1; i < max; ++i) {
    if (checkPrime(i)) { // isPrime = 0 when it is prime
      printf("%d , ", i);
    }
  }
  return 0;
}

/*
#include <stdio.h>
int checkPrime(int number);
int main() {
  /*this main function will be used to
 1- take to numbers as interval
 2- display all int numbers inside this interval
 3- loop the numbers inside the interval and pass them to checkPrime function
*/
/* int min, max, isPrime;
 printf("Enter two integer values for interval: minimum , maximum \n:");
 scanf("%d", &min);
 scanf("%d", &max);
 printf("\nCheck for prime numbers .. \n");
 for (int i = min + 1; i < max; ++i) {
   isPrime = checkPrime(i);
   if (isPrime == 0) { // isPrime = 0 when it is prime
     printf("%d , ", i);
   }
 }
 return 0;
}*/

/*int checkPrime(int num) {
  int isPrime, j;
  /*this checkPrime function will be used to
  1- reiceve an argument number to check in for loop
  2- for loop dows not depend on the interval .. just from 2 untill main() stops

  for (j = 2; j < num / 2; ++j) {
    if (num % j == 0) {
      // in the number is divisible by j so it is not prime
      isPrime = 1; // isprime = 1 when it is not prime
      break;
    }
  }
  return isPrime;
}
*/