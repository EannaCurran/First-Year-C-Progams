/* Lab 5 Question 1 by Eanna Curran(18311676) on 9/10/18
   Program which prints out the factorial of a given number */

#include <stdio.h>

int main(void){
  /* Declaring variables */
  int answer, i;

  /* Taking user input */
  printf("What factorial would you like to print?\n");
  scanf("%d", &i);

  answer = i;

  /* Calculates the factorial of the user input */
  for (i ; i != 1; i--){
    answer *= i - 1;
  }

  /* Prints answer */
  printf("%d", answer);

  return 0;

}
