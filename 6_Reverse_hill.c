#include <stdio.h>
int main(){
    int i,j,s,n;

    printf("Enter the size : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--){
        for(s=1;s<=(n-i);s++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=2;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}