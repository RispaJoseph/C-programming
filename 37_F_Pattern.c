#include <stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter the no.of rows : ");
    scanf("%d",&n);

    for(i=1;i<=3;i++){
        for(j=1;j<=i*3;j++){
            printf("*");
        }
        printf("\n");
        for(k=1;k<=2;k++){
            printf("*");
            printf("\n");
        }
    }
       
    
}