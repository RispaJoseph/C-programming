// 13579
// 3579
// 579
// 79
// 9

#include <stdio.h>
int main(){
    int i,j,n;

    printf("Enter a range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf("%d",(2*j)-1);
        }
        printf("\n");
    }
}