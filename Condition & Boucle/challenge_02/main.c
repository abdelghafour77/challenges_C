#include <stdio.h>
#include <stdlib.h>

int main()
{

    char car;

    printf("Saisir un caractere: ");
    scanf("%c", &car);


    switch(car)
    {
        case 'a':
            printf("");
            break;
        case 'e':
            printf("");
            break;
        case 'i':
            printf("");
            break;
        case 'o':
            printf("");
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }
    return 0;
}
