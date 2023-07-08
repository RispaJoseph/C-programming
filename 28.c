// *
// ***
// *
// ***
// ***
// *
// ***
// ***
// ***
// *
// ***
// ***
// ***
// ***

#include <stdio.h>
int main(){
    int i,j,k;

    for(i=1;i<=4;i++){
        printf("*\n");
        for(j=1;j<=i;j++){
            for(k=1;k<=3;k++){
                printf("*");
            }
            printf("\n");
        }
    }
}