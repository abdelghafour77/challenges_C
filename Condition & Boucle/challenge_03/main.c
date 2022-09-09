#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Saisir la 1 er valeur : ");
    scanf("%d",&a);
    printf("Saisir la 2 eme valeur : ");
    scanf("%d",&b);
    if(a==b){
        printf("%d", (a+b)*3);
    }else{
        printf("%d", a+b);
    }
    return 0;
}
