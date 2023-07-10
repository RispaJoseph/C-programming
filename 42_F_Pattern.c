#include <stdio.h>
int main(){
    int n,i,j,k;

    printf("Enter the no.of rows : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i*5;j++){
            printf("*");
        }
        printf("\n");
        if(i==3){
            break;
        }
        for(k=1;k<=i*3;k++){
            printf("*");
            printf("\n");
        }
    }
}