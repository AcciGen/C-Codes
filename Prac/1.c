#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main_1() {
    
    system("cls");
    char text[128];

    FILE *f1 = fopen("1.txt", "r");
    FILE *f2 = fopen("2.txt", "w");

    fgets(text, 128, f1);
    fprintf(f2, "%s", text);

    fclose(f1);
    fclose(f2);

    return 0;
}



int main_2() {

    system("cls");
    FILE *f = fopen("2.txt", "w");

    for (int y = 1; y <= 10; y++) {

        for (int x = 1; x <= 10; x++) {

            if (x==10) {
                fprintf(f, "%3d\n", x*y);
                break;
            }

            fprintf(f, "%3d ", x*y);
        }
    }

    fclose(f);
    return 0;
}



int main_3() {

    system("cls");
    char str[2048];

    FILE *f = fopen("2.txt", "w");

    fgets(str, 2048, stdin);

    for (int i=0; i<strlen(str); i++) {

        if (str[i]=='.' && str[i+1]==' ')
          str[i+1] = '\n';

        fputc(str[i], f);
    }

    fclose(f);
    return 0;
}



int main_4() {

    system("cls");
    char str[2000];
    int count=0;

    FILE *f = fopen("1.txt", "r");

    while (fgets(str, 2000, f))
      count++;

    printf("%d", count);

    fclose(f);
    return 0;
}


int main() {

    system("cls");
    char str[100];
    char m[100];
    char o[100];
    char l[100];

    FILE *f1 = fopen("1.txt", "r");
    FILE *f2 = fopen("2.txt", "r");
    FILE *f3 = fopen("3.txt", "r");

    while (fscanf(f1, "%s", str) != EOF) {

        if (isupper(str[0]))
          strcpy(m, str);

        else if (ispunct(str[strlen(str)-1]))
          strcpy(l, str);

        else
          strcpy(o, str);
    }

    while (fscanf(f2, "%s", str) != EOF) {

        if (isupper(str[0]))
          strcpy(m, str);

        else if (ispunct(str[strlen(str)-1]))
          strcpy(l, str);

        else
          strcpy(o, str);  
    }

    while (fscanf(f3, "%s", str) != EOF) {

        if (isupper(str[0]))
          strcpy(m, str);

        else if (ispunct(str[strlen(str)-1]))
          strcpy(l, str);

        else
          strcpy(o, str);
    }

    printf("%s %s %s", m, o, l);

    fclose(f1);
    fclose(f2);
    fclose(f3);
    return 0;
}