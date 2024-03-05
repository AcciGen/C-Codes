#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void recursive(int n) {

//     if (n != 0) {

//         recursive(n/8);
//         printf("%d", n%8);
//     }
// }

// int main() {

//     system("cls");
//     void (*f_kur)(int) = recursive;
//     int n;

//     scanf("%d", &n);
//     f_kur(n);

//     return 0;
// }


// int main() {

//     system("cls");
//     char str[100];
//     char soz[50];
//     int count = 0;

//     printf("Satr kiriting >> ");
//     fgets(str, 100, stdin);
//     printf("Qaysi so'z >> ");
//     fgets(soz, 50, stdin);
//     soz[strlen(soz)-1] = '\0';

//     char *ptr = strstr(str, soz);
//     while (ptr != NULL) {

//         count++;
//         strcpy(str, str+(ptr-str+strlen(soz)));
//         ptr = strstr(str, soz);
//     }

//     printf("Natija %d", count);

//     return 0;
// }


int main() {

    system("cls");
    int n;
    printf("Nechta son kiritasiz >> ");
    scanf("%d", &n);
    int arr[n];

    for (int i=0; i<n; i++) {

        scanf("%d", &arr[i]);
    }
    puts("");

    for (int i=0; i<n; i++) {

        for (int j=1+i; j<n; j++) {

            if (arr[i] < arr[j]) {

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i=0; i<n; i++) {

        printf("%d ", arr[i]);
    }

    return 0;
}