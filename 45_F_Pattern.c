#include <stdio.h>
int main(){
    int n,i,j,k,l;

    printf("Enter the no.of rows : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i*3;j++){
            for(k=1;k<=i;k++){
                printf("*");
            }
        }
        if(i==n){
            break;
        }
        for(l=1;l<=n;l++){
            printf("*\n");
        }
    }
}