#include <stdio.h>
#include <stdlib.h>

int main()
{   float metre , mile;
    printf("Saisir la distance en mile :");
    scanf("%f",&mile);
    metre=mile*1609;
    printf("La distance en metre est : %f",metre);


    return 0;
}
