#include <stdio.h>
#include <stdlib.h>

int main()
{
    double lon , lar , circon;
    printf("Saisir longueur : ");
    scanf("%lf",&lon);
    printf("Saisir largeur : ");
    scanf("%lf",&lar);
    circon=2*(lon+lar);
    printf("la circonference de rectangle est %f" , circon);
    return 0;
}
