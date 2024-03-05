#include <stdio.h>
#include <stdbool.h>
struct ichimlik
{
    char nomi[30];
    int narxi;
    float kkal;
    bool energetik; 
};
typedef struct ichimlik ichimlik;
void show_drink(ichimlik drink)
{
    printf("Nomi:     \t%s\n",drink.nomi);
    printf("Narxi:    \t%d so'm\n",drink.narxi);
    printf("KKAL:     \t%.2f\n",drink.kkal);
    printf("Energetik \t%s\n",drink.energetik?"Yes":"No");
    puts("\t \t ********************************");
}
void show_drinks(ichimlik drinks[],int count)
{
    for (int i = 0 ; i < count ; i ++)
    {
        printf("\t\t%d - ichimlik haqida ma'lumot\n",i+1);
        show_drink(drinks[i]);
    }
}
int main()
{
    system("cls");
    ichimlik drink[100],item;
    int n,z;
    printf("Ichimliklar sonini kiriting: ");
    scanf("%d",&n);
    char c;
    for (int i = 0 ; i < n ; i ++)
    {
        printf("%d - ichimlik: \n",i+1);
        printf("Nomi: ");scanf("%s",drink[i].nomi);
        printf("Narxi: ");scanf("%d",&drink[i].narxi);
        printf("KKALL: ");scanf("%f",&drink[i].kkal);
        printf("Ichimlik energetikmi(0,1): ");
        scanf("%d",&z);
        drink[i].energetik=z==1?true:false;
    }
    
   
    char nomi[100];
    bool check;
    int select,tanla,dengi;
    float kkali;
    check1:
        c=getc(stdin);
        c=getc(stdin);
        system("cls");
        printf("Quyidagilardan birini tanlang: \n");
        printf("1. Nomi bo'yicha\n");
        printf("2. Narxi bo'yicha\n");
        printf("3. Kaloriyasi bo'yicha\n");
        printf("4. Ichimlik turi bo'yicha\n");
        printf(">>>> ");
        scanf("%d",&select);
        switch (select)
        {
            case 1:
                printf("1. Nomi bo'yicha qidirish\n");
                printf("2. Nomi bo'yicha saralash\n");
                printf(">>>> ");
                scanf("%d",&tanla);
                if (tanla == 1)
                {
                    printf("Ichimlik nomini kiriting: ");
                    scanf("%s",nomi);
                    check=false;
                    for (int i = 0 ; i < n ; i ++)
                    {
                        if (stricmp(drink[i].nomi,nomi)==0)
                        {
                            show_drink(drink[i]);
                            check=true;
                        }
                    }
                    if (check==false)
                        printf("Bizda %s nomli ichimlik mavjud emas\n",nomi);
                }
                else if (tanla == 2)
                {
                    for (int i = 0 ; i < n -1 ; i ++)
                    {
                        for (int j = i + 1 ; j < n ; j ++)
                        {
                            if (stricmp(drink[i].nomi,drink[j].nomi)>0)
                            {
                                item=drink[i];
                                drink[i]=drink[j];
                                drink[j]=item;
                            }
                        }
                    }
                    system("cls");
                    show_drinks(drink,n);
                }
                break;
            case 2:
                printf("1. Narxi bo'yicha qidirish\n");
                printf("2. Narxi bo'yicha saralash(ascending)\n");
                printf("3. Narxi bo'yicha saralash(descending)\n");
                printf(">>>> ");
                scanf("%d",&tanla);
                if (tanla == 1)
                {
                    printf("Pulni kiriting: ");
                    scanf("%d",&dengi);
                    check=false;
                    for (int i = 0 ; i < n ; i ++)
                    {
                        if (drink[i].narxi <= dengi)
                        {
                            show_drink(drink[i]);
                            check=true;
                        }
                    }
                    if (check==false)
                        printf("Bizda %d so'mdagi ichimlik mavjud emas\n",dengi);
                }
                else if (tanla == 2)
                {
                    for (int i = 0 ; i < n -1 ; i ++)
                    {
                        for (int j = i + 1 ; j < n ; j ++)
                        {
                            if (drink[i].narxi > drink[j].narxi)
                            {
                                item=drink[i];
                                drink[i]=drink[j];
                                drink[j]=item;
                            }
                        }
                    }
                    system("cls");
                    show_drinks(drink,n);
                }
                else if (tanla == 3)
                {
                    for (int i = 0 ; i < n -1 ; i ++)
                    {
                        for (int j = i + 1 ; j < n ; j ++)
                        {
                            if (drink[i].narxi < drink[j].narxi)
                            {
                                item=drink[i];
                                drink[i]=drink[j];
                                drink[j]=item;
                            }
                        }
                    }
                    system("cls");
                    show_drinks(drink,n);
                }
                break;
            case 3:
                printf("1. Kaloriyasi bo'yicha qidirish\n");
                printf("2. Kaloriyasi bo'yicha saralash(ascending)\n");
                printf("2. Kaloriyasi bo'yicha saralash(descending)\n");
                printf(">>>> ");
                scanf("%d",&tanla);
                if (tanla == 1)
                {
                    printf("Kaloriyani kiriting: ");
                    scanf("%f",&kkali);
                    check=false;
                    for (int i = 0 ; i < n ; i ++)
                    {
                        if (drink[i].kkal = kkali)
                        {
                            show_drink(drink[i]);
                            check=true;
                        }
                    }
                    if (check==false)
                        printf("Bizda %.2f kkal ichimlik mavjud emas\n",kkali);
                }
                else if (tanla == 2)
                {
                    for (int i = 0 ; i < n -1 ; i ++)
                    {
                        for (int j = i + 1 ; j < n ; j ++)
                        {
                            if (drink[i].kkal > drink[j].kkal)
                            {
                                item=drink[i];
                                drink[i]=drink[j];
                                drink[j]=item;
                            }
                        }
                    }
                    system("cls");
                    show_drinks(drink,n);
                }
                else if (tanla == 3)
                {
                    for (int i = 0 ; i < n -1 ; i ++)
                    {
                        for (int j = i + 1 ; j < n ; j ++)
                        {
                            if (drink[i].kkal < drink[j].kkal)
                            {
                                item=drink[i];
                                drink[i]=drink[j];
                                drink[j]=item;
                            }
                        }
                    }
                    system("cls");
                    show_drinks(drink,n);
                }
                break;        
        }
    goto check1;
    return 0;
}