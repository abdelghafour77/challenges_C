#include <stdio.h>
#include <stdlib.h>

int main()
{
    double fa,res ;
    printf("Saisir la temperature en Fahrenheit :\n");
    scanf("%lf",&fa);
    res=(fa-32)/1.8;

        printf("la temperature en Celsius est %lf ",res);

    return 0;
}
