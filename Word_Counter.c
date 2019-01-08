/* Lab 9 Question 1 by Eanna Curran(18311676) on 11/11/18
   Program which counts the number of words in a given string */

#include <stdio.h>
#include <string.h>
#define N 1000

int main(){

  /* Declaring variables */
  char input[N];
  int s, o, n, found;

  s = 0;
  found = 0;

  /* Taking user input*/
  printf("Enter a string please:");
  fgets(input, N, stdin);

  /* Iterates through string finding position of spaces */
  for (n = 0 ; n < N ; n++){
    if (input[n] == '\0'){
      /* Prints number of words in string */
      printf("\nYour string contains %d words", s);
      return 0;
    }
    /* When space found, found is set to 0 */
    if (input[n] == ' '){
      found = 0;
    }
    /* When none space chacacter is found, count of words increases by one */
    if (input[n] != ' ' && input[n] != '\t' && input[n] != '\n' && found == 0){
      s += 1;
      found = 1;
    }
  }
}
