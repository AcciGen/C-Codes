#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int irand(int a, int b) {

    return a + rand() % (b - a + 1);
}

void CHIQAR(int arr[], int n) {

    for (int i=0; i<n; i++) {

        arr[i] *= 5;
        printf("%d ", arr[i]);
    }
}

int main_1() {

    int n;
    printf("Nechta son kiritasiz >> ");
    scanf("%d", &n);
    int arr[n];

    for (int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    CHIQAR(arr, n);

    return 0;
}

int main_2() {

    int n;
    printf("Nechta son kiritasiz >> ");
    scanf("%d", &n);
    int array[n];

    for (int i=0; i<n; i++)
        scanf("%d", &array[i]);

    int juft[n];
    int sch = 0;
    for (int i=0; i<n; i+=2) {

        juft[sch++] = array[i];
        printf("%d ", juft[sch-1]);
    }

    return 0;
}

int main_3() {

    char str[30];
    printf("Char seriya kiriting >> ");
    fgets(str, 30, stdin);
    char temp;

    temp = str[0];
    str[0] = str[strlen(str)-2];
    str[strlen(str)-2] = temp;

    temp = str[1];
    str[1] = str[strlen(str)-3];
    str[strlen(str)-3] = temp;

    puts(str);
}

int main_4() {

    int n;
    printf("Enter n >> ");
    scanf("%d", &n);
    int arr[n][n];

    for (int i=0; i<n; i++) {

        for (int j=0; j<n; j++) {

            if (i == j || i + j == n - 1) {

                printf(" * ");
                continue;
            }

            arr[i][j] = irand(1, 9);
            printf(" %d ", arr[i][j]);
        }
        puts("");
    }

    return 0;
}

int main() {

    int text[10];

    FILE *f = fopen("Text.txt", "r");
    FILE *juft = fopen("Text1.txt", "w");
    FILE *toq = fopen("Text2.txt", "w");
    if (f == NULL) {

        printf("Error");
        return 1;
    }

    int i=0;
    while (fscanf(f, "%d", text[i++]) != EOF) {

        // for (int i=0; i<=10; i++) {

        //     for (int j=0; j<=10; j++) {

        //         if (text[i] > text[j]) {

        //             int n = text[i];
        //             text[i] = text[j];
        //             text[j] = n;
        //         }
        //     }
        // }

        printf("%d", text[i-1]);
    
    }

    fclose(f);
    fclose(juft);
    fclose(toq);
    return 0;
}