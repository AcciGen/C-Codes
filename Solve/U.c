#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef struct xona
{
    char name[30];
    char size[10];
    int place;
    bool condi;
}room;
void showroom(room r)
{
    printf("|%-25s|%-15s|%-10d|%-15s|\n",r.name,r.size,r.place,r.condi?"True":"False");
    printf("--------------------------------------------------------------------------\n");
}
int main()
{
    system("cls");
    room Room;
    FILE * f = fopen ("Rooms.dat","ab+");
    char select='Y';
    int sel,x;
    char name[30];
    bool check;
    puts("Quyidagilardan birini tanlang: ");
    puts("1. Xona qo'shish uchun");
    puts("2. Xonani o'zgartirish uchun");
    puts("3. Xonani o'chirish uchun");
    puts("4. Xonani qidirish uchun");
    puts("5. Xonalar ro'yxatini ko'rish uchun");
    puts("6. Dasturdan chiqish uchun");
    printf(">>>>>>");scanf("%d",&sel);
    switch (sel)
    {
        case 1:
            system("cls");
            select = 'Y';
            while (select == 'Y' || select == 'y')
            {
                fflush(stdin);
                printf("\nXonaning nomi:      ");scanf("%s",Room.name);
                fflush(stdin);
                printf("Xonanaing o'lchami: ");scanf("%s",Room.size);
                printf("Xonadagi o'rinlar:  ");scanf("%d",&Room.place);
                printf("Konditsionerli 1/0: ");scanf("%d",&x);
                Room.condi=x==1?true:false;
                fflush(stdin);
                fwrite(&Room, sizeof(room) , 1 , f);
                printf("Yana xona qo'shasizmi: Y/N  ");
                select =  getch();
            }
            break;
        case 2:
            system("cls");
            fclose(f);
            f = fopen("Rooms.dat","rb+");
            check=false;
            printf("Xona nomini kiriting: ");
            scanf("%s",name);
            while (fread( &Room, sizeof(room),1,f))
            {
                if (stricmp(Room.name,name)==0)
                {
                    check=true;
                    fflush(stdin);
                    printf("\nXonaning nomi:      ");scanf("%s",Room.name);
                    fflush(stdin);
                    printf("Xonanaing o'lchami: ");scanf("%s",Room.size);
                    printf("Xonadagi o'rinlar:  ");scanf("%d",&Room.place);
                    printf("Konditsionerli 1/0: ");scanf("%d",&x);
                    Room.condi=x==1?true:false;
                    fflush(stdin);
                    fseek(f, -sizeof(Room),SEEK_CUR);
                    fwrite(&Room,sizeof(Room),1,f);
                    break;
                }
                
            }

            if (check==false)
                printf("%s nomdagi xona mavjud emas\n",name);
            break;
        case 3:
            system("cls");
            fclose(f);
            f = fopen("Rooms.dat","rb+");
            check=false;
            printf("Xona nomini kiriting: ");
            scanf("%s",name);
            while (fread(&Room, sizeof(room),1,f))
            {
                if (stricmp(Room.name,name)==0)
                {
                    check=true;
                    fflush(stdin);
                    remove(Room.name);
                    break;
                }
            }

            if (check==false)
                printf("%s nomdagi xona mavjud emas\n",name);
            break;
        case 5:
            rewind(f);
            while (fread(&Room,sizeof(Room),1,f))
                showroom(Room);
            break;
        case 6:
            return 0;
            break;
    }
    fclose(f);
    return 0;
}