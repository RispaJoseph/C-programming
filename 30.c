// 1
// 12
// 1 3
// 1  4
// 12345

#include <stdio.h>
int main(){
    int i,j,n;

    printf("Enter the range : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j==1 || i==j || i==n){
                printf("%d",j);
            }else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}