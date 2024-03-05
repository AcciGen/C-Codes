#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*1 struct vector {

    int x;
    int y;
    int z;
};

int main() {

    system("cls");
    struct vector v1,v2,v3;

    scanf("%d %d %d %d %d %d", &v1.x, &v1.y, &v1.z, &v2.x, &v2.y, &v2.z);
    v3.x=v1.x+v2.x;
    v3.y=v1.y+v2.y;
    v3.z=v1.z+v2.z;
    
    printf("v3(%d,%d,%d)", v3.x, v3.y, v3.z);

    return 0;
}*/


/*2 struct employee {
    int id;  
    char name[50];  
    float salary;  
};

int main() {

    system("cls");
    struct employee e1, e2;

    printf("1chi ishchini malumotini kiriting\nID >>> ");
    scanf("%d", &e1.id);
    printf("Name >>> ");
    scanf("%s", e1.name);
    printf("Salary >>> ");
    scanf("%f", &e1.salary);

    system("cls");
    printf("2chi ishchini malumotini kiriting\nID >>> ");
    scanf("%d", &e2.id);
    printf("Name >>> ");
    scanf("%s", e2.name);
    printf("Salary >>> ");
    scanf("%f", &e2.salary);

    system("cls");

    if (e1.salary>e2.salary) {

        printf("Manager\nID >>> %d\nName >>> %s\nSalary >>> %.2f\n\n", e1.id, e1.name, e1.salary);
        printf("Ishchi\nID >>> %d\nName >>> %s\nSalary >>> %.2f\n", e2.id, e2.name, e2.salary);
    }

    else {
        printf("Manager\nID >>> %d\nName >>> %s\nSalary >>> %.2f\n\n", e2.id, e2.name, e2.salary);
        printf("Ishchi\nID >>> %d\nName >>> %s\nSalary >>> %.2f\n", e1.id, e1.name, e1.salary);
    }

    return 0;
}*/


/*3 struct employee {   
    int id;  
    char name[50]; 
	char country[64]; 
    float salary;  
};

int main() {

    system("cls");
    struct employee emp[4];
    float sum=0;

    for (int i=0; i<3; i++) {

        system("cls");
        printf("Person %d\n", i+1);
        printf("ID >>> "); scanf("%d", &emp[i].id);
        printf("Name >>> "); scanf("%s", emp[i].name);
        printf("Country >>> "); scanf("%s", emp[i].country);
        printf("Salary >>> "); scanf("%f", &emp[i].salary);

    }

    system("cls");

    int max=0;

    for (int i=0; i<3; i++) {

        if (emp[i].id == 4) {

          printf("Person %d\n", i+1);
          printf("ID >>> %d\n", emp[i].id);
          printf("Name >>> %s\n", emp[i].name);
          printf("Country >>> %s\n", emp[i].country);
          printf("Salary >>> %.2f\n\n", emp[i].salary);
        }

        if (max<emp[i].salary)
          max=i;
        
        sum = sum + emp[i].salary;
    }

    printf("\n1 Oylik Maosh Summasi >>> %.2f\n\n", sum);

    printf("Person %d\n", max+1);
    printf("ID >>> %d\n", emp[max].id);
    printf("Name >>> %s\n", emp[max].name);
    printf("Country >>> %s\n", emp[max].country);
    printf("Salary >>> %.2f\n\n", emp[max].salary);

    for (int i=0; i<3; i++) {

        if (sum/3<emp[i].salary)
         printf("Name %s\n", emp[i].name);
    }

    return 0;
}*/


/*4 struct student {

    char name[20];
    char faculty[32];
    int grade;  
    int age;  
};

void show(struct student s[]) {

    for (int i=0; i<3; i++) {
        printf("Name %s\nFaculty %s\nGrade %d\nAge %d\n\n", s[i].name, s[i].faculty, s[i].grade, s[i].age);
    }
}
int main() {

    system("cls");

    struct student s[5];

    for (int i=0; i<3; i++) {
        scanf("%s %s %d %d", s[i].name, s[i].faculty, &s[i].grade, &s[i].age);
    }

    show(s);

    for (int i=0; i<3; i++) {

        if (s[i].age>=20 && s[i].age<=25)
          printf("Name %s\nFaculty %s\nGrade %d\nAge %d\n\n", s[i].name, s[i].faculty, s[i].grade, s[i].age);     
    }

    printf("<<<Alochilar>>>\n");

    for (int i=0; i<3; i++) {

        if (s[i].grade>=80 && s[i].grade<=100)
          printf("Name %s\nFaculty %s\nGrade %d\nAge %d\n\n", s[i].name, s[i].faculty, s[i].grade, s[i].age);     
    }

    return 0;
}*/