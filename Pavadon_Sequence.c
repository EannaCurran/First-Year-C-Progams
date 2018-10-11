/* Lab 5 Question 1 by Eanna Curran(18311676) on 9/10/18
   Program which prints out iterations of the pavodan sequence */



#include <stdio.h>

int main(void){
  /* Decalring variables */
  int first, second, third, i, count, answer;

  /* Taking user input */
  printf("How many iterations do you want to print of the sequence?\n");
  scanf("%d", &i);

  first = 1;
  second = 1;
  third = 1;

  /* Checks if user input is less then four and prints results if it is */
  if(i == 0){
    return 0;
  }

  if(i == 1){
    printf("1");
    return 0;
  }
  else if(i == 2){
    printf("1\n1");
    return 0;
  }

  else{
    printf("1\n1\n1\n");
  }

  /* Prints out wanted steps of the sequence bigger than 4*/
  for (count = 3; count < i; count++){
    answer = first + second;
    printf("%d\n", answer);
    first = second;
    second = third;
    third = answer;

  }
  return 0;
}
