#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lar,lon;
    lar=16;
    lon=32;
    for(int i=0; i<lar;i++){
        for(int j=0; j<lon;j++){
            if(j==0){
                printf("--*");

            }else if (j==lon-1){
                printf("-*--");

            }else if (i==0 || i==lar-1){
                printf("-*");
            }else{
                printf("  ");
            }
            //printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
