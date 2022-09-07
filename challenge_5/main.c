#include <stdio.h>
#include <stdlib.h>

int main()
{
    double fa,res ;
    printf("Saisir la temperature en Fahrenheit :\n");
    scanf("%lf",&fa);
    res=(fa-32)/1.8;
    if(res<5){
        printf("la temperature est tres froid");
    }else if(res<35){
        printf("la temperature est froid");
    }else if(res<43){
        printf("la temperature est chaud");
    }else {
        printf("la temperature est tres chaud");
    }
    return 0;
}
