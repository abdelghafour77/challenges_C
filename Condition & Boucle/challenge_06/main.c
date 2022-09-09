#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,s=0;
    char tab1[4],tab2[4];

    printf("entrer le premiere mots : ");
    gets(tab1);

    printf("entrer le deuxieme mots : ");
    gets(tab2);
    for (i=0;i<=4;i++){
        for (j=0;j<=4;j++){
            if(tab1[i]==tab2[j]){
                    s++;
            }
        }
    }
    if(s==4){
        printf("Anagramme");
    }else{
        printf("Pas d'anagramme !");
    }

    return 0;
}
