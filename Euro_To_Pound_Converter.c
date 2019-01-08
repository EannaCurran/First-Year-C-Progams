/* Lab 10 Question 2 by Eanna Curran(18311676) on 18/11/18
   Program which using functions converts Euros to Pounds */

#include <stdio.h>
#include <math.h>

void convert(double x);

int main(void){

  /* Declaring variables */
  double a,pound;

  /* Taking user input */
  do {
    fflush(stdin);
    printf("Input the amount of euro you want to convert:\n");
  } while (scanf("%lf", &a) != 1);

  /* Calls function */
  convert(a);
  return 0;
}

/* Fucntion which converts Euros to Pouns and prints the answer */
void convert(double x){
  double pound;
  pound = 0.8 * x;
  printf("%1.2lf euros is %1.2lf pounds", x, pound);
}
