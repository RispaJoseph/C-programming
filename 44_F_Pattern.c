#include <stdio.h>
int main(){
    int n,i,j,k,l;
    printf("Enter the no.of rows : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=(2*i)-1;j++){
            printf("*");
        }
        printf("\n");
        
        if(i==n){
            break;
        }
        for(k=1;k<=i;k++){
            for(l=1;l<=i;l++){
                printf("*");
            }
            printf("\n");
        }
    }
}