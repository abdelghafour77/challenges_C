#include <stdio.h>
#include <stdlib.h>

int main(){

int n,m,l,max;
    printf("Hello world!\n");
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&l);
    max=n;
    if(m>max){
        max=m;}
    else if(l>max){
        max=l;}
    printf("%d",max);
    return 0;
}
