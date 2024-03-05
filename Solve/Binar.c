#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int irand(int a, int b) {

    return a + rand() % (b - a + 1);
}

int main() {

    system("cls");
    srand(time(0));
    FILE *file = fopen ("Num.dat", "wb+");
    if (file == NULL) {

        printf("Error");
        return 1;
    }

    int x, count;
    printf("Nechta son kiritmoqchisiz >> ");
    scanf("%d", &count);

    while (count > 0 ) {

        x = irand(10, 50);
        printf("%d ", x);
        fwrite(&x, sizeof(int), 1, file);
        count--;
    }

    int max = INT_MIN, min = INT_MAX;
    rewind(file);
    while (fread(&count, 4, 1, file)) {

        if (max < count)
            max = count;

        if (min > count)
            min = count;
    }

    fclose(file);

    printf("\nMax = %d\nMin = %d", max, min);
    return 0;
}