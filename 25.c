// 123454321
// 1234321
// 12321
// 121
// 1

#include <stdio.h>
int main(){
    int i,j,n;

    printf("Enter the range : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(j=i-1;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}