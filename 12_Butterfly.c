#include <stdio.h>
int main(){
    int i,j,s,n;

    printf("Enter the no.of rows : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(s=1;s<=(n-i);s++){
            printf(" ");
        }
        for(s=1;s<=(n-i);s++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    for(i=n-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(s=1;s<=(n-i);s++){
            printf(" ");
        }
        for(s=1;s<=(n-i);s++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}