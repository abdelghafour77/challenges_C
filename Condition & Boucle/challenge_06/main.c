#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    char tab1[4],tab2[4],solution[4];


    printf("entrer le premiere mots : ");
    scanf("%s",&tab1);

    printf("entrer le deuxieme mots : ");
    scanf("%s",&tab2);
    printf("%c\n",tab1[0]);

    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            if(tab1[i]==tab2[j]){
                    printf("y\n");
            }
        }
    }
    printf("%c%c%c%c\n",solution[0],solution[1],solution[2],solution[3]);
    printf("%s",solution);

    return 0;
}
