#include <stdio.h>
int main(){
    int n,i,j,k;

    printf("Enter the no.of rows : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i*2;j++){
            printf("*");
        }
        printf("\n");
        for(k=1;k<=i;k++){
            printf("*");
            printf("\n");
        }
    }
}

// **
// *
// ****
// *
// *
// ******
// *
// *
// *