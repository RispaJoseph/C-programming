// 123454321
// 1234321
// 12321
// 121
// 1

#include <stdio.h>
int main(){
    int i,j,n;
    printf("Enter the size : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=(n+1)-i;j++){
            printf("%d",j);
        }

        for(j=n-i;j>=1;j--){
            printf("%d",j);
        }  
        printf("\n");
    }
}