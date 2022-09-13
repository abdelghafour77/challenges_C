#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPremier(int a){
    if (a==0){
        return false;
    }
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

int divededby(int n,int a){
    int s;
    if((a%n)!=0){
        return 0;
    }else{
    s=a/n;
     return isPremier(s);
    }
}

int main()
{
    int a, n;
    printf("Saisir le premiere nombre : ");
    scanf("%d",&a);

    printf("Saisir le deuxieme nombre : ");
    scanf("%d",&n);

    if(divededby(n,a)== true){
        printf("true");
    }else{
        printf("false");
    }

        return 0;
}
