#include <stdio.h>

int main() {

    float a, b;
    printf("Enter two floats >> ");
    scanf("%f %f", &a, &b);
    int int_a = (int) a;
    int int_b = (int) b;
    int sum = int_a + int_b;

    int float_a = ((int) ((a*10) - int_a*10));
    int float_b = ((int) ((b*10) - int_b*10));

    int float_sum = float_a + float_b;

    if (sum > float_sum)
        printf("%d > %d", sum, float_sum);
    else
        printf("%d < %d", sum, float_sum);
    return 0;
}