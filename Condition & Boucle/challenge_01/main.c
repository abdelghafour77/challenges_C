#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,res=0;
    printf("saisir un nombre : ");
    scanf("%d",&num);
    res=num%2;
    if(res==0){
        printf("le nombre est pair");
    }else{
        printf("le nombre est impair");
    }

    return 0;
}
