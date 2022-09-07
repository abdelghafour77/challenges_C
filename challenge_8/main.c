#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, somme;
    double moyenne;

    printf("Saisir a :");
    scanf("%d",&a);
    printf("Saisir b :");
    scanf("%d",&b);
    printf("Saisir c :");
    scanf("%d",&c);
    printf("Saisir d :");
    scanf("%d",&d);

    somme=a+b+c+d;
    moyenne=somme/4;
    printf("moyenne est : %f", moyenne);
    return 0;
}
