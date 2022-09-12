#include <stdio.h>
#include <stdlib.h>

struct students{
    int num;
    char nom[30];
    int age;
    float note;
};

int main()
{
    struct students student1;

    printf("Saisir votre nom : ");
    gets(student1.nom);

    printf("Saisir votre numero de matricule : ");
    scanf("%d",&student1.num);


    printf("Saisir votre age : ");
    scanf("%d",&student1.age);

    printf("Saisir votre note : ");
    scanf("%f",&student1.note);

    printf("Votre numero de matricule est : %d \n",student1.num);
    printf("Votre nom est : %s \n",student1.nom);
    printf("Votre age est : %d \n",student1.age);
    printf("Votre note est : %f \n",student1.note);




    return 0;
}
