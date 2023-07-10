#include <stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter the no.of rows : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
            printf("\n");
        }
        for(k=1;k<=4*i;k++){
            printf("*");
        }
        printf("\n");
    }
}


// *
// ****
// *
// *
// ********
// *
// *
// *
// ************