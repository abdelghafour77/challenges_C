#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , j,s=0;
 char tab1[4],tab2[4], indice[4];

 printf("saisir le premier mots : ");
 gets(tab1);

 printf("saisir le deuxieme mots : ");
 gets(tab2);

 for (i=0;i<4;i++){
     for(j=0;j<4;j++){
            if(tab1[i]==tab2[j]){
                s++;
            break;
            }
     }
 }
 if(s==4){
    printf("yes");
 }else{
 printf("no");
 }

    return 0;
}
