#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main() {

    system("cls");
    char password[] = "Qwerty123";
    char access[100];
    int n = 0;
    char c;

    printf("Enter the password >> ");
    while (c != '\\') {

        c = getch();
        printf("*");
        access[n++] = c;
    }

    access[n-1] = '\0';
    if (stricmp(access, password) == 0) {

        system("cls");
        printf("Connected\n");
    }
    else {

        system("cls");
        printf("Wrong password!\n");
        getch();
        return main();
    }

    return 0;
}