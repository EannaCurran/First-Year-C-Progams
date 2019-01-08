/* Lab 10 Question 1 by Eanna Curran(18311676) on 18/11/18
   Program which using functions calculates area of triangle */

#include <stdio.h>

void triangle(double x,double y);

int main(void){

  /* Declaring variables */
  double a,b,size;

  /* Taking user input */
  do {
    fflush(stdin);
    printf("Input the base of the triangle:\n");
  } while (scanf("%lf", &a) != 1);

  do {
    fflush(stdin);
    printf("Input the height of the triangle:\n");
  } while (scanf("%lf", &b) != 1);

  /* Calls function */
  triangle(a,b);
  return 0;
}

/* Fucntion which prints the area of a triangle */
void triangle(double x, double y){
  double size;
  size = 0.5 * (x * y);
  printf("The area of the triangle is %1.2lf units squared.", size);
}
