#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    FILE *file = fopen ("1.txt", "r");
    FILE *output = fopen ("output.txt", "w");
    if (file == NULL || output == NULL) {

        printf("Error in file");
        return 1;
    }
    
    str[strlen(str)-1] = '\0';

    while (fgets(str, 100, file)) {

        for (int i = strlen(str)-2; i >= 0; i--) {

            fprintf(output, "%c", str[i]);
        }

        putc('\n', output);
    }

    fclose(file);
    fclose(output);
    return 0;
}