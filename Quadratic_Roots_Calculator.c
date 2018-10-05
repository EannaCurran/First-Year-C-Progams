/* Lab 3 Question 1 by Eanna Curran(18311676) on 1/10/18
   Program which calculates the roots of an quadratic equation*/

#include <stdio.h>
#include <math.h>

int main (void){
  /*Declaring variables*/
  double a, b, c, i;
  double r1, r2;

  /*Taking user input*/
  printf("Enter a digit for a: \n");
  scanf("%lf", &a);
  printf("Enter a digit for b: \n");
  scanf("%lf", &b);
  printf("Enter a digit for c: \n");
  scanf("%lf", &c);

  /*Checks if linear equation*/
  if (a == 0.0){
    printf("This equation only has one root since a = 0\n");

    /*Calculates root of equation*/
    r1 = - c / b;

    printf("The only root is: %1.2f\n", r1);
    
    return 0;
  }

  /*Checks if imaginary roots*/
  if ((pow(b, 2) - 4 * a * c) < 0){
    printf("This equation has imaginary roots since b^2 - 4ac < 0\n");

    /*Calculates roots of equation*/
    i = sqrt(-1 * (pow(b, 2) - 4 * a * c)) / (2 * a);
    r1 = -b / (2 * a);

    printf("The first root is: %1.2f+%1.2fi\n", r1, i);
    printf("The second root is: %1.2lf-%1.2lfi\n", r1, i);

    return 0;
  }

  /*Calculates roots of equation*/
  r1 = (-b + (sqrt(pow(b, 2) - 4 * a * c))) / (2 * a);
  r2 = (-b - (sqrt(pow(b, 2) - 4 * a * c))) / (2 * a);

  printf("The first root is: %1.2lf\n", r1);
  printf("The second root is: %1.2lf\n", r2);

  return 0;
}
