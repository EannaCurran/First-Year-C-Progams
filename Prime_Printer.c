/* Lab 7 Question 2 by Eanna Curran(18311676) on 23/10/18
   Program which prints out all primes below a given number */


#include <stdio.h>
#define N 1000

int main (void){
  /* Decalring variables */
  int n, a, b, c, d, checker, array[N];

  checker = 0;

  /* Taking user input for a number bigger then 2 and small then 1000*/
  while (checker == 0){
    printf ("What value for n would you like?(Less then 1000): ");
    scanf ("%d", &n);
    if (n > 2 && n < 1000){
      checker = 1;
      }
    }

  /* Fills array of number 2 to n-1 */
  for (a = 0; a < n - 1; a++){
    array[a] = a + 2;
    }

  /* Removes all non prime elements from array */
  printf("\n");
  for (b = 0; b < n; b++){
    for (c = b + 1; c < n; c++){
      if (array[c] % array[b] == 0){
        for (d = c + 1; d < n; d++){
          array[d - 1] = array[d];
        }
        n--;
        }
      }
    }
  /* Prints array of primes */
  for (int i=0; i < n; i++){
    printf("%d\n", array[i]);
    }
  return 0;
  }
