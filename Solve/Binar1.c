#include <stdio.h>
#include <stdlib.h>

int main() {

    system("cls");
    FILE *file = fopen ("Num.dat", "wb+");
    if (file == NULL) {

        printf("Error");
        return 1;
    }

    int x = 1;

    while (x <= 10) {

        fwrite(&x, sizeof(int), 1, file);
        x++;
    }

    while (fread(&x, 4, 1, file)) {

        printf("%d ", x);
        fseek(file, -1, SEEK_CUR);
    }

    fclose(file);
    return 0;
}