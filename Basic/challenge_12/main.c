#include <stdio.h>

int main()
{
    char num[3];

    printf("saisir un nombre de 3 chiffre : ");
    scanf("%s",&num);
    printf("%c%c%c ",num[2],num[1],num[0]);


   return 0;
}
