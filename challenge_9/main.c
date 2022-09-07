#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1,x2,y1,y2;
    float distance;
    printf("Saisir les donnees de la premiere point \n");
    printf("x=");
    scanf("%d",&x1);
    printf("y=");
    scanf("%d",&y1);
     printf("Saisir les donnees de la deuxieme point \n");
    printf("x=");
    scanf("%d",&x2);
    printf("y=");
    scanf("%d",&y2);
    distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("%lf",distance);
    return 0;
}
