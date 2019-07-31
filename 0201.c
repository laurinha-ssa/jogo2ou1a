#include <stdio.h>

int main()
{
    int n1,n2;
    printf("digite dois numeros\n");
    scanf("%i %i", &n1, &n2);
    if (n1==n2){
        printf("sim\n");
    }
    else{ printf ("nao\n");}
    if ((n1*n2)<100){
        printf("sim\n");
    }
    else {printf ("nao\n");}
    if ((3*n1)>n2){
        printf("sim\n");
    }
    else {printf ("nao\n");}
    if (n1 >0 || n2 >0){
        printf("sim\n");
    }
    else {printf ("nao\n");}
    if (n1 <0 && n2<0){
    printf("sim\n");
    }
    else {printf ("nao\n");}
    if (n1%2!=0 || n2%2!=0 ){
        printf("sim\n");
    }
    else {printf ("nao\n");}
    if (n1<n2){
        printf("%i\n",n1);
    }

    if (n1>n2){
        printf("%i\n", n2);
    }

return 0;

    }




