#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main() {

//     system("cls");
//     FILE *f = fopen ("file.txt","w");
//     if (f == NULL) {

//         printf("File bilan ishlashda xatolik!\n");
//         return 0;
//     }

//     char F[20], I[20], SH[20];

//     printf("F.I.SH. kiriting >> ");
//     scanf("%s %s %s", F, I, SH);
//     fprintf(f ,"%s\n%s\n%s\n", F, I, SH);
//     printf("Filega ma'lumot yozildi!\n");
//     fclose(f);

//     return 0;
// }



int main() {

    system("cls");
    FILE *f = fopen ("Alpha.txt", "r");

    if (f == NULL) {

        printf("ERROR!");
        return 0;
    }

    char str[100];
    int sch=0;

    while (fscanf(f, "%s", &str)>0) {

        for (int i=0; i<strlen(str); i++) {

            if (str[i]=='E' || str[i]=='e' || str[i]=='U' || str[i]=='u' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='A' || str[i]=='a')
              sch++;
        }
    }

    printf("Count == %d\n", sch);

    fclose(f);
    return 0;
}