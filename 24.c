// 1
// 121
// 12321
// 1234321
// 123454321
#include <stdio.h>
int main(){
    int i,j,n,s;
    printf("Enter the range : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
    
        for(j=n;j>=1;j--){
            if(j<i){
                printf("%d",j);
            }
        }
        printf("\n");
    }
}