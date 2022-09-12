#include <stdio.h>
#include <stdlib.h>


void echanger(int* a, int* b){
int c = *a;
*a = *b;
*b = c;
}

int main()
{

    int a, b;
    printf("Saisir le premiere nombre : ");
    scanf("%d",&a);

    printf("Saisir le deuxieme nombre : ");
    scanf("%d",&b);

    echanger(&a,&b);

    printf("%d , %d",a,b);
    return 0;
}
