#include <stdio.h>
#include <stdlib.h>

int main() {

    system("cls");
    char str[100];
    char c;

    FILE *f = fopen ("file.txt", "w+");

    printf("Satri kiriting >> ");
    fgets(str, 100, stdin);

    str[strlen(str)-1]='\0';
    fprintf(f, "%s", str);

    printf("Accepted (click r to read) ");
    fflush(stdin);
    c = gets(stdin);

    if (c == 'r' || c =='R') {

        rewind(f);
        while (fgets(str, 100, f))
            puts(str);
    }

    else {

        fclose(f);
        system("start file.txt");
    }
}