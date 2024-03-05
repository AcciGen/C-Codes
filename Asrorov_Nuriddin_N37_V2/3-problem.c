#include <stdio.h>

int addNumber (int number, int add) {

    int sum = 0;

    while (number > 0) {

        sum = sum*10 + number%10;
        number /= 10;
    }
    number = add;

    while (sum > 0) {

        number = number*10 + sum%10;
        sum /= 10;
    }
    return number;
}


int main() {

    int number;
    printf("Enter number >> ");
    scanf("%d", &number);

    int add;
    printf("Enter new number >> ");
    scanf("%d", &add);

    printf("%d", addNumber(number, add));

    return 0;
}