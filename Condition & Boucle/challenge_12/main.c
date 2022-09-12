#include <stdio.h>
#include <stdlib.h>

void copy(char *str1, char *str2){

    for(int i=0 ; i<=sizeof(str1) ; i++){
            str2[i] = str1[i];
    }
}
int main()
{
    char str1[20],str2[20];
    printf("type anything : ");
    scanf("%s",&str1);

    copy(str1,str2);
    printf("%s",str2);


    return 0;
}
