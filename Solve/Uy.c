#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int irand(int a, int b) {

    return a + rand() % (b - a + 1);
}

int main_1() {

    system("cls");
    char str[100];
    FILE *file = fopen ("Str.dat", "wb+");
    if (file == 0) {

        printf("Error");
        return 0;
    }

    printf("Satr kiriting >> ");
    fgets(str, 100, stdin);
    str[strlen(str)-1] = '\0';
    fwrite(str, sizeof(char), strlen(str), file);
    rewind(file);

    fread(str, 1, strlen(str), file);

    char *word = strtok (str, " ");
    word = strtok (NULL, " ");    

    puts(word);
    puts(word);

    fclose(file);
    return 0;
}


int main_2() {

    system("cls");
    char str[100];
    FILE *file = fopen ("Str.dat", "wb+");
    if (file == 0) {

        printf("Error");
        return 0;
    }

    printf("Satr kiriting >> ");
    fgets(str, 100, stdin);
    str[strlen(str)-1] = '\0';
    fwrite(str, sizeof(char), strlen(str), file);
    rewind(file);

    fread(str, 1, strlen(str), file);

    int ind = 0, ind_1 = 0, ind_false = 0;
    for (int i=0; i<strlen(str); i++) {

        if (str[i] == ' ') {

            ind = ind_false;
            ind_1 = i-1;
            ind_false = i+1;
        }
    }

    int j = 0;
    char word[100];
    while (ind <= ind_1) {

        word[j] = str[ind];
        ind++;
        j++;
    }

    puts(word);
    puts(word);

    fclose(file);
    return 0;
}


int main_3() {

    system("cls");
    int n;
    printf("Nechta son kiritmoqchisiz >> ");
    scanf("%d", &n);
    int arr[n];

    for (int i=0; i<n; i++) {

        scanf("%d", &arr[i]);
    }

    FILE *file = fopen ("Num.dat", "wb+");
    if (file == NULL) {

        printf("Error");
        return 0;
    }


    fwrite(arr, 4, n, file);
    rewind(file);

    int num=0;
    while (fread(&num, 4, 1, file)) {

        if (num%2 == 0) {

            printf("%d ", num);
        }
    }

    fclose(file);
    return 0;
}


int main_4() {

    system("cls");
    int n;
    printf("Nechta son kiritmoqchisiz >> ");
    scanf("%d", &n);
    int arr[n];

    for (int i=0; i<n; i++) {

        scanf("%d", &arr[i]);
    }

    FILE *file = fopen ("Num.dat", "wb+");
    if (file == NULL) {

        printf("Error");
        return 0;
    }


    fwrite(arr, 4, n, file);
    rewind(file);

    int num=0;
    while (fread(&num, 4, 1, file)) {

        if (num%2 != 0) {

            printf("%d ", num);
        }
    }

    fclose(file);
    return 0;
}


int main_5() {

    system("cls");
    srand(time(0));
    FILE *file = fopen ("Num.dat", "wb+");
    FILE *juft = fopen ("Juft.dat", "wb+");
    FILE *toq = fopen ("Toq.dat", "wb+");
    FILE *minus = fopen ("Musbat.dat", "wb+");
    FILE *plus = fopen ("Manfiy.dat", "wb+");

    int x, n;
    printf("Nechta son bo'lsin >> ");
    scanf("%d", &x);

    while (x > 0) {

        n = irand(-50, 51);
        printf("%d ", n);
        fwrite(&n, sizeof(int), 1, file);
        x--;
    }
    puts("");
    rewind(file);

    while (fread(&x, sizeof(int), 1, file)) {

        if (x%2 == 0)
            fwrite(&x, sizeof(int), 1, juft);
        else if (x%2 != 0)
            fwrite(&x, sizeof(int), 1, toq);

        if (x >= 0)
            fwrite(&x, sizeof(int), 1, plus);
        else if (x < 0)
            fwrite(&x, sizeof(int), 1, minus);
    }
    rewind(file);
    rewind(juft);
    rewind(toq);
    rewind(plus);
    rewind(minus);
    
    printf("Juft fileda >> ");
    while (fread(&x, sizeof(int), 1, juft)) {

        printf("%d ", x);
    }
    puts("");

    printf("Toq fileda >> ");
    while (fread(&x, sizeof(int), 1, toq)) {

        printf("%d ", x);
    }
    puts("");

    printf("Musbat fileda >> ");
    while (fread(&x, sizeof(int), 1, plus)) {

        printf("%d ", x);
    }
    puts("");

    printf("Manfiy fileda >> ");
    while (fread(&x, sizeof(int), 1, minus)) {

        printf("%d ", x);
    }
    puts("");

    fclose(file);
    fclose(juft);
    fclose(toq);
    fclose(minus);
    fclose(plus);
    return 0;
}


int main_6() {

    system("cls");
    srand(time(0));
    FILE *file = fopen ("Num.dat", "wb+");
    if (file == NULL) {

        printf("Error");
        return 1;
    }

    int x, count = 10;
    int n = count+1;
    int arr[n];

    while (count > 0 ) {

        x = irand(1, 40);
        printf("%d ", x);
        fwrite(&x, sizeof(int), 1, file);
        count--;
    }
    rewind(file);
    puts("");

    fread(arr, 4, n, file);

    for (int i=1; i<n-2; i++) {

        if (arr[i-1] > arr[i] && arr[i] < arr[i+1]) {

            printf("%d ", arr[i]);
            count++;
        }
    }
    
    fclose(file);
    printf("jami %d ta\n", count);
    return 0;
}