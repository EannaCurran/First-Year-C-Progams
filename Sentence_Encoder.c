/* Lab 8 Question 2 by Eanna Curran(18311676) on 11/11/18
   Program which encodes a users message into a given permutation */

#include <stdio.h>
#define N 1000

int main(void)
{
  /* Declaring variables */
  char sentence[N];
  char perm[N] = "qjczieaungsdfxmphybklortvw";
  char alphabet[N] = "abcdefghijklmnopqrstuvwxyz";
  char perm_capital[N] = "QJCZIEAUNGSDFXMPHYBKLORTVW";
  char alphabet_capital[N] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  int n, k, capital;

  n = 0;
  capital = 0;

  /* Taking user input*/
  printf("Enter what string you want to change to 'secret' language: \n");
  scanf("%[^\n]s", sentence);

  /* Finds position of each letter in string in the alphabet and prints that position in perm */
  while (n < N && sentence[n] != '\0'){
    if (sentence[n] < 64 && sentence[n] > 90 || sentence[n] > 96 && sentence[n] < 123){
      for (k = 0; k < 26; k++){
        if (sentence[n] == alphabet[k]){
          printf("%c", perm[k]);
          break;
        }
        else if (sentence[n] == alphabet_capital[k]){
          printf("%c", perm_capital[k]);
          break;
        }
      }
    }

    else{
      printf("%c", sentence[n]);
    }

    n += 1;
  }

  return 0;

}
