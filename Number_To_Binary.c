/* Lab 6 Question 2 by Eanna Curran(18311676) on 16/10/18
   Program which prints out the binary of a number */


#include <stdio.h>
#define MAX_SIZE 10000

int main(void){
  /* Decalring variables */
  int digit, n ,result;
  int binary[MAX_SIZE];

  n = 0;

  /* Taking user input */
  printf("What number do you want to convert to binary?:");
  scanf("%d", &digit);

  /* Checks if user input is a non integer */
  if (digit != 1){
    printf("Invalid input");
    return 0;
  }
  /* Stores user input */
  result = digit;

  /* Converts user input to binary  and stores it into array*/
  while(digit != 0){
    if (digit % 2 == 1){
      binary[n] = 1;
      }
    else{
      binary[n] = 0;
      }
  digit = digit / 2;
  n++;
  }

  /* Prints out binary from stored array */
  printf("The binary of %d is ", result);
  for(n--; n >= 0; n--){
    printf("%d",binary[n]);
  }

  return 0;

}
