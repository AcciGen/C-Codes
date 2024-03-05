#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*1 void recursive(int n) {


        if (n>0) {
         printf("%d ", n);
         recursive(n-1);
        }
}

int main(){

        system("cls");
        int n;

        scanf("%d", &n);
        recursive(n);

        printf("\n");

        return 0;
}*/


/*2 void recursive(int n) {

        if (n>0) {
         recursive(n-1);
         printf("%d ", n);
        }
}

int main(){

        system("cls");
        int n;

        scanf("%d", &n);
        recursive(n);

        printf("\n");

        return 0;
}*/


/*3 void recursive(int n) {

        if (n>0) {

            if (n%2==0)
            printf("%d ", n);

          recursive(n-1);
        }
}

int main(){

        system("cls");
        int n;

        scanf("%d", &n);

        if (n>0)
          n--;

        recursive(n);

        printf("\n");

        return 0;
}*/


/*4 void recursive(int n) {

        if (n>0) {

         recursive(n-1);

          if (n%2!=0)
            printf("%d ", n);

        }
}

int main(){

        system("cls");
        int n;

        scanf("%d", &n);

        if (n%2!=0)
         n--;

        recursive(n);

        printf("\n");

        return 0;
}*/


/*5 void recursive (int n, int f) {

        if (n>1) {

          printf("%d ", f);
          recursive(n-1, f+f);
        }
}

int main() {

        system("cls");
        int n, f=1;

        scanf("%d", &n);
        printf("%d ", f);
        recursive(n, f);

        return 0;
}*/


/*6 void recursive (int n, int f) {

        if (n>1) {

          printf("%d ", f);
          recursive(n-1, f*f+f*f);
        }
}

int main() {

        system("cls");
        int n, f=1;

        scanf("%d", &n);
        printf("%d ", f);
        recursive(n, f);

        return 0;
}*/


/*7 void recursive (float a, int n, float s) {

        if (n>1)
          recursive(a*s, n-1, s);

        if (n==1)
          printf("%.3f", a);
}

int main() {

        system("cls");
        float a;
        int n;

        printf("1ta haqiqiy va 1ta butun son kiriting >>> ");
        scanf("%f %d", &a, &n);
        float s=a;

        recursive(a, n, s);

        return 0;
}*/


/*8 int find_num(char str[], int i, int count) {

        if (isdigit(str[i]))
          count++;
        
        if (i+1==strlen(str))
          return count;

        find_num(str, i+1, count);
          
}

int main() {

        system("cls");
        char str[1000];
        int i=0, count=0;

        fgets(str, 1000, stdin);
        printf("%d", find_num(str, i, count));

        return 0;

}*/


/*9 void recursive(int n) {

        if (n!=0) {

          recursive(n/2);
          printf("%d", n%2);
        }
}

int main() {

        system("cls");
        int n;

        scanf("%d", &n);
        recursive(n);

        return 0;
}*/
