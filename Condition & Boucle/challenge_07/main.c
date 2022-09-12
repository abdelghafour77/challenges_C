#include <stdio.h>
#include <stdlib.h>

int add (int a, int b){
    int somme;
    somme=a+b;
    return somme;
}
int main()
{
    int a, b;
    printf("Saisir le premiere nombre : ");
    scanf("%d",&a);

    printf("Saisir le deuxieme nombre : ");
    scanf("%d",&b);
    add(a,b);
    return 0;
}
