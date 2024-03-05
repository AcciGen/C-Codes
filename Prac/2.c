#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main_1() {

    system("cls");
    char str[100];
    int count = 1;
    FILE *file = fopen ("txt.txt", "r");
    if (file == NULL) {
        printf("Error");
        return 1;
    }

    while(fgets(str, 100, file)) {

        printf("%s", str);
        if (count == 1)
          rewind(file);
        count++;
    }

    fclose(file);
    return 0;
}



int main_2() {

    system("cls");
    FILE *file = fopen ("txt.txt", "r");
    if (file == NULL) {
        printf("Error");
        return 1;
    }

    fseek(file, 0, SEEK_END);
    int size = ftell(file);
    fclose(file);
    printf("Size of file: %d bayt", size);
    return 0;
}



int main_3() {

    system("cls");
    char str[100];
    FILE *file = fopen ("none.txt", "r+");
    if (file == NULL) {
        printf("Error");
        return 1;
    }

    while (fscanf(file, "%s", str) != EOF) {

        if (!strcmp(str, "none")) {

            fseek(file, -strlen(str), SEEK_CUR);
            fprintf(file, "John");
        }
    }

    fclose(file);
    system("start none.txt");
    return 0;
}



int main_4()
{
    FILE * f = fopen ("2.txt","r");
    FILE * f1 = fopen ("3.txt","w");
    if (f == NULL )
    {
        printf("faylni ochishda xatolik\n");
        return 0;
    }
    
    char str[100];
    while(fscanf(f,"%s",str) > 0)
    {
        if (strcmp(str,"none") == 0)
        {
            fprintf(f1,"%s ","jhon");
        }
        else
        {
            fprintf(f1,"%s ",str);
        }
        

    }
    fclose(f);
    fclose(f1);
    system("start 3.txt");
    return 0;
}



typedef struct Person {
	char fname[32];
	char sname[32];
	char gender[8];
} PERSON;

int main()
{
    PERSON arr[64]={'\0'};

    FILE *file=fopen("people.txt","r+");
    char c;

    while(!feof(file))
    {
        c=fgetc(file);
        if(c==',')
        {
            fseek(file,-1,SEEK_CUR);
            fputc(' ',file);
        }
    }
    rewind(file);
    int i=0;
    while(!feof(file))
    {
        fscanf(file,"%s",arr[i].fname);
        fscanf(file,"%s",arr[i].sname);
        fscanf(file,"%s",arr[i].gender);

        i++;
    }
    
    for(int i=0;i<50;i++)
    {
        printf("FULL NAME: %s %s\nGENDER: %s \n",arr[i].fname,arr[i].sname,arr[i].gender);
    }

    fclose(file);

}
