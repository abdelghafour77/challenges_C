#include <stdio.h>
#include <stdlib.h>

int main()
{   float metre , mile;
    printf("Saisir la distance en metre :");
    scanf("%f",&metre);
    mile=metre/1609;
    printf("La distance en mile est : %f",mile);


    return 0;
}
