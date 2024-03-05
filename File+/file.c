#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

  system("cls");
  char str[2000];
  FILE *file = fopen ("mac.txt", "r");
  FILE *obo  = fopen ("one_by_one.txt", "w");    

  char *tok = strtok (str, "-");
  while (fgets(str, 2000, file)) {

    
  }

  fclose(file);
  fclose(obo);
  return 0;
}