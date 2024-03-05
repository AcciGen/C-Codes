#include <stdio.h>

int main() {

    int arr[10];

    printf("Enter 10 array items >> ");
    for (int i = 0; i < 10; i++) {

        scanf("%d", &arr[i]);
    }

    int count = arr[0];

    for (int i = 1; i <= 10; i++) {

        printf("%d ", count);
        count += arr[i];
    }

    return 0;
}