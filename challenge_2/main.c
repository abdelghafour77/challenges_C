#include <stdio.h>
#include <stdlib.h>

int main()
{
    double fa,res ;
    printf("Saisir la temperature en Fahrenheit :\n");
    scanf("%lf",&fa);
    res=(fa-32)*5/9;
    printf("la temperature en degre Celsius est :%lf", res);
    return 0;
}
