#include <stdio.h>
#include <math.h>
void main(){

	int annee, mois=12, jour=365, heure=8760;
	long minute=525600, second=31536000;
	printf("entre un annee : ");
	scanf("%d",&annee);
	printf("Mois : %d \nJour : %d \nHeure : %d \nMinute : %d \nSecond : %d",mois*annee,jour*annee,heure*annee,minute*annee,second*annee);


}
