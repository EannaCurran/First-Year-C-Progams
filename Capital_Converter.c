/* Lab 8 Question 1 by Eanna Curran(18311676) on 11/11/18
   Program which converts lower letters in a given string to upper case*/

#include <stdio.h>
#define N 1000

int main(void)
{
  /* Declaring variables */
  char sentence[N];
  int n = 0;
  int capital = 0;

  /* Taking user input*/
  printf("Enter what string you want to change to capital?: \n");
  scanf("%[^\n]s", sentence);

  /* Finds lower case of each letter inputted by user and prints it */
  while (n < N && sentence[n] != '\0'){
    if (sentence[n] > 96 && sentence[n] < 123){
      capital = sentence[n] - 32;
      printf("%c", capital);
    }
    else{
      printf("%c", sentence[n]);
    }

    n += 1;
  }

  return 0;

}
