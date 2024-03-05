#include <stdio.h>
#include <string.h>

int main() {

    char str[20];

    printf("Enter two words >> ");
    fgets(str, 20, stdin);

    int count = 0;

    for (int i = 'a'; i <= 'z'; i++) {

        count = 0;

        for (int j = 0; j < strlen(str)-1; j++) {

            if (i == str[j])
                count++;
        }

        if (count > 1) {

            printf("%c - %d\n", i, count);
        }
    }

    return 0;
}