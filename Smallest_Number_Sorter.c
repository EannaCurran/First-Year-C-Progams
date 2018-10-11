/* Lab 5 Question 1 by Eanna Curran(18311676) on 9/10/18
   Program which takes 4 digits from the user and orders them from biggest
   to smallest */


#include <stdio.h>

int main(void){
  /* Decalring variables */
  float w, x, y, z, copy;
  int m,n;
  float list[4];

  /* Taking user input */
  printf("Enter the first digit:\n");
  scanf("%f", &w);
  list[1] = w;
  printf("Enter the second digit:\n");
  scanf("%f", &x);
  list[2] = x;
  printf("Enter the third digit:\n");
  scanf("%f", &y);
  list[3] = y;
  printf("Enter the forth digit:\n");
  scanf("%f", &z);
  list[4] = z;

  /* Bubble soring of the list */
  for (n = 1; n < 5; n++){
    for (m = n + 1; m < 5; m++){
      	if (list[m] < list[n]){
          copy = list[m];
          list[m] = list[n];
          list[n] = copy;
        }

      }

    }
  /* Prints out elements of list in order */
  printf("%f,%f,%f,%f", list[1], list[2], list[3], list[4]);
  return 0;
}
