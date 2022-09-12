#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

bool is_leap_year(int year)
{
    if(((year%4==0)&&(year%100!=0))||year%400==0){

        return true;
    }else{
        return false;
    }

}
int main()
{
    int year;
    printf("saisir une annee entre 1800 et 10000 : ");
    scanf("%d",&year);

    if(is_leap_year(year)== true){
        printf("true");
    }else{
        printf("false");
    }

    return 0;
}
