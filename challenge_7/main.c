#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Saisir la valeur de 'a':");
    scanf("%d",&a);
    printf("Saisir la valeur de 'b':");
    scanf("%d",&b);

    printf("a + b = %d \n",a+b);
    printf("a - b = %d \n",a-b);
    printf("a * b = %d \n",a*b);
    printf("a / b = %d \n",a/b);
    printf("a %% b = %d \n",a%b);

    return 0;
}
