/* Lab 4 Question 1 by Eanna Curran(18311676) on 2/10/18
   Program which calculates user input*/

#include <stdio.h>
#include <string.h>

int main(void){

  /*Declaring variables*/
  int digit_1, digit_2, answer;
  char symbol;

  /*Taking user input*/
  printf("Calcualtor Program \n");
  printf("Enter an equation which calculates either addition(+), subtraction(-), division(/) or multiplication(x):\n");
  scanf("%d %c %d", &digit_1, &symbol, &digit_2);

  /*Calculating if user inputs is addition*/
  if (symbol == '+'){
    answer = digit_1 + digit_2;
    printf("%d", answer);
  }

  /*Calculating if user inputs is subtraction*/
  else if (symbol == '-'){
    answer = digit_1 - digit_2;
    printf("%d", answer);
  }

  /*Calculating if user inputs is division*/
  else if (symbol == '/'){
    /*Error handling for 0 division*/
    if (digit_2 == 0){
      printf("Error occured: division by 0");
      return 0;
    }
    answer = digit_1 / digit_2;
    printf("%d", answer);
  }

  /*Calculating if user inputs is multiplication*/
  else if (symbol == 'x'){
    answer = digit_1 * digit_2;
    printf("%d", answer);
  }

  /*Error handling for invalid input*/
  else{
    printf("Error occured: Invalid input");
  }

  return 0;
}
