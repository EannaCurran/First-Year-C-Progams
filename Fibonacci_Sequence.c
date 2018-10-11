/* Lab 5 Question 1 by Eanna Curran(18311676) on 9/10/18
   Program which prints out iterations of the fibonacci sequence */

#include <stdio.h>

int main(void){
  /* Declaring variables */
  long long first, second, count, answer, i;

  first = 1;
  second = 0;
  answer = 0;
  count = 0;

  /* Taking user input */
  printf("How many iterations do you want to print of the sequence?\n");
  scanf("%lld", &i);

  /* Prints out wanted steps of the sequence */
  while(i >= count){
    answer = first + second;
    printf("%lld\n", answer);
    second = first;
    first = answer;
    count += 1;
  }

  return 0;

}
