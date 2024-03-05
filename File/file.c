#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main_1() {

   char text[128];
   int count = 0;

    FILE *f = fopen("file.txt", "r");

    while (fscanf(f, "%s", text) != EOF) {

        for (int i = 0; i < strlen(text); i++) {

            if (isalpha(text[i]))
                count++;
        }
    }

    printf("%d ta harf bor", count);

    fclose(f);

    return 0;
}



int main_2() {
    
    char text[128];
    int count = 0;

    FILE *f = fopen("file.txt", "r");

    while(fscanf(f, "%s", text) != EOF) {

        for(int i=0; i<strlen(text); i++) {

            if(isdigit(text[i]))
                count++;
        }
    }

    printf("%d ta son bor ", count);

    fclose(f);

    return 0;
}



int main_3() {

    char str[100];
    int swap;

    FILE * n1 = fopen("num1.txt", "w");
    FILE * n2 = fopen("num2.txt", "w");

    printf("Biron bir son kiriting >> ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str)-1; i++) {

        for (int j = i+1; j < strlen(str); j++) {

            if (str[i] < str[j]) {

                swap = str[i];
                str[i] = str[j];
                str[j] = swap;
            }
        }
    }

    for (int i = 0; i < strlen(str); i++) {

        fputc(str[i], n1);
        fputc(' ', n1);
    }

    for (int i = strlen(str)-1; i >= 0; i--)
    {
        fputc(str[i], n2);
        fputc(' ', n2);
    }

    printf("Accepted");

    fclose(n1);
    fclose(n2);
    return 0;
}



int main_4() {

    char str[100];
    int swap;

    FILE * n1 = fopen("num1.txt", "w");
    FILE * n2 = fopen("num2.txt", "w");

    printf("Biron bir so'z kiriting >> ");
    fgets(str, 100, stdin);

    for (int i = 0; i < strlen(str)-1; i++) {

        for (int j = i+1; j < strlen(str); j++) {

            if (str[i] < str[j]) {

                swap = str[i];
                str[i] = str[j];
                str[j] = swap;
            }
        }
    }

    for (int i = 0; i < strlen(str); i++) {

        fputc(str[i], n1);
        fputc(' ', n1);
    }

    for (int i = strlen(str)-1; i >= 0; i--)
    {
        fputc(str[i], n2);
        fputc(' ', n2);
    }

    printf("Accepted");

    fclose(n1);
    fclose(n2);
    return 0;
}