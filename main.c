
#include <stdio.h>
#include <string.h>

int main()
{
    int i,j;
    char str[100];
    scanf("%s",&str);
    for(i=0;i<strlen(str);i++){
        for(j=0;j<strlen(str);j++){
            if(i==j || i+j==(strlen(str)-1))
            {
                printf("%c ",str[i]);
            }
            else{
                printf(" ");
            }
           
        }
        printf("\n");
    }

    return 0;
}
