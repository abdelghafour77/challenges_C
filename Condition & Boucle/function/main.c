#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void somme(int a , int b){
    int res;
    res=a+b;
    if(res>=20){
       printf("false");
    }else{
           printf("true");
    }

}

int main()
{
    int a,b;
     printf("a: ");
     scanf("%d",&a);

    printf("b: ");
     scanf("%d",&b);

    somme(a,b);
    return 0;
}
