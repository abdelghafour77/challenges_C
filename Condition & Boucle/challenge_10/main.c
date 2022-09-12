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

void divededby(int n,int a){
    isPremier(a+n);
}

int main()
{
    int a, n;
    printf("Saisir le premiere nombre : ");
    scanf("%d",&a);

    printf("Saisir le deuxieme nombre : ");
    scanf("%d",&n);

    if(isPremier(a)== true){
        printf("true");
    }else{
        printf("false");
    }

        return 0;
}
