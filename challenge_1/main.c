#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[10], prenom[15], sexe[1], number[13];
    int age;
    printf("Bonjour!\n Saisir votre nom : ");
    scanf("%s",&nom);
    printf(" Saisir votre prenom : ");
    scanf("%s",&prenom);
    printf(" Saisir votre age : ");
    scanf("%d",&age);
    printf(" Choisir votre sexe [M/F] : ");
    scanf("%s",&sexe);
    printf(" Saisir votre numero de telephone : ");
    scanf("%s",&number);

    printf("Votre nom est : %s\n",nom);
    printf("Votre prenom est : %s\n",prenom);
    printf("Votre age est : %d\n",age);
    printf("Votre sexe est : %s\n",sexe);
    printf("Votre numero de telephone est : %s \n",number);
    return 0;
}
