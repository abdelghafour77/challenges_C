#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main(){
    char c;
    printf("Entrer un caractere :");
    scanf("%c",&c);

    if(isalpha(c)){
        printf("Le caractere fait partie des alphabets \n");
        if(islower(c)){
            printf("Le caractere est en miniscule \n");
        }else{
            printf("Le caractere est en majiscule \n");
        }
    }else{
        printf("Le caractere n'est pas un alphabet");
    }

}
