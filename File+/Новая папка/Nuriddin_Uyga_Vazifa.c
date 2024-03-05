#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    
    system("cls");
    int n;
    int count;
    FILE *file = fopen ("FileIsFile.txt", "w");
    
    printf("Enter N >> ");
    scanf("%d", &n);

    if (n%2 != 0) {

        for (int i=1; i<n+1; i++) {

            count = 0;

            for (int j=1; j<=i; j++) {
                
                if (j == i)
                  fprintf(file, "%d", i);
                else
                  fprintf(file, "%d+", i);
                count+=i;
            }

            fprintf(file, "=%d\n", count);
        }
        printf("Accepted");
    }

    if (n%2 == 0) {

        for (int i=n; i>0; i--) {

            count = 0;

            for (int j=1; j<=i; j++) {
                
                if (j == i)
                  fprintf(file, "%d", i);
                else
                  fprintf(file, "%d+", i);
                count+=i;
            }

            fprintf(file, "=%d\n", count);
        }
        printf("Accepted");
    }

    fclose(file);
    system("start FileIsFile.txt");
    return 0;
}



bool IsPrime(int n) {

    if (n%2 == 0)
      return false;

    int r=3;

    while (r*r <= n) {

        if (n%r == 0)
          return false;

        r+=2;
    }

    return true;
}

int main_2() {

    system("cls");
    int n;
    FILE *file = fopen ("Tub.txt", "w");

    printf("Enter N >> ");
    scanf("%d", &n);

    for (int i=2; i<n; i++) {

        if (IsPrime(i))
          fprintf(file, "%d ", i);
    }

    fclose(file);
    system("start Tub.txt");
    return 0;
}



int main_3() {

    system("cls");
    int num;
    int sum = 0;

    FILE *file = fopen ("Sum.txt", "r");
    if (file == NULL) {

      printf("Not Accepted");
      return 1;
    }

    while (fscanf(file, "%d", &num) != EOF)
      sum+=num;

    printf("%d", sum);

    fclose(file);
    return 0;
}



int main_4() {

  system("cls");
  char str[100];

  FILE *file = fopen ("Gap.txt", "r");
  if (file == NULL) {

    printf("Not Accepted");
    return 1;
  }

  while (fscanf(file, "%s", str) != EOF) {

      if (isupper(str[0]))
        printf("%s\n", str);
  }

  fclose(file);
  return 0;
}



int main_5() {

  system("cls");
  char str[100];
  int count = 0;

  FILE *file = fopen ("Gap.txt", "r");
  if (file == NULL) {

    printf("Not Accepted");
    return 1;
  }

  while (fscanf(file, "%s", str) != EOF) {

    count = 0;

    for (int i=0; i<strlen(str); i++) {

      if (isalpha(str[i]))
        count++;
    }

    if (count == 3) {
      
      for (int i=0; i<strlen(str); i++) {

        if (isalpha(str[i]))
          printf("%c", str[i]);
      }
      printf("\n");
    }
  }

  fclose(file);
  return 0;
}



int main_6() {

  system("cls");
  char str[100];
  int count = 0;

  FILE *file = fopen ("Gap.txt", "r");
  if (file == NULL) {

    printf("Not Accepted");
    return 1;
  }

  while (fscanf(file, "%s", str) != EOF) {

    count = 0;

    for (int i=0; i<strlen(str); i++) {

      if (isalpha(str[i]))
        count++;
    }

    if (count > 3) {
      
      for (int i=0; i<strlen(str); i++) {

        if (isalpha(str[i]))
          printf("%c", str[i]);
      }
      printf("\n");
    }
  }

  fclose(file);
  return 0;
}



int main_7() {

  system("cls");
  char str[100];
  int count = 0;

  FILE *file = fopen ("Gap.txt", "r");
  if (file == NULL) {

    printf("Not Accepted");
    return 1;
  }

  while (fscanf(file, "%s", str) != EOF) {

    count = 0;

    for (int i=0; i<strlen(str); i++) {

      if (isalpha(str[i]))
        count++;
    }

    if (count <= 5) {
      
      for (int i=0; i<strlen(str); i++) {

        if (isalpha(str[i]))
          printf("%c", str[i]);
      }
      printf("\n");
    }
  }

  fclose(file);
  return 0;
}



int main_8() {

  system("cls");
  char str[100];
  int count = 0;

  FILE *file = fopen ("Gap.txt", "r");
  if (file == NULL) {

    printf("Not Accepted");
    return 1;
  }

  while (fscanf(file, "%s", str) != EOF) {

    count = 0;

    for (int i=0; i<strlen(str); i++) {

      if (isdigit(str[i]))
        count++;
    }

    if (count > 0)
      printf("%s\n", str);
  }

  fclose(file);
  return 0;
}