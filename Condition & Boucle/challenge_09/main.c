#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPremier(int a){
    int i,cpt=0;
    for(i=1;i<=a;i++){
            if((a%i)==0){
                cpt++;
            }
    }
    if(cpt==2){
        return true;
    }else{
        return false;
    }
}

int main()
{
    int a;

    printf("Saisir un nombre : ");
    scanf("%d",&a);

    if(isPremier(a)== true){
        printf("true");
    }else{
        printf("false");
    }


    return 0;
}
