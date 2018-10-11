/* Lab 5 Question 1 by Eanna Curran(18311676) on 9/10/18
   Program which prints out iterations of pells sequence */


#include <stdio.h>

int main(void){
  /* Declaring variables */
  int first, second, i, count, answer;

  /* Taking user input */
  printf("How many iterations do you want to print of the sequence?\n");
  scanf("%d", &i);

  first = 0;
  second = 1;

  /* Prints out wanted steps of the sequence */
  for(count = 0; count < i; count++){
    answer = (2 * first) + second;
    printf("%d\n", answer);
    second = first;
    first = answer;

  }
  return 0;




}
