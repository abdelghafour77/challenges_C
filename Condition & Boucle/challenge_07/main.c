#include <stdio.h>
#include <stdlib.h>

void add (int a, int b){
printf("%d",a+b);
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
