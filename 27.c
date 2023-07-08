// 50 
// 45 40
// 35 30 25
// 20 15 10 5

#include <stdio.h>
int main(){
    int i,j,k;

    k=50;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%d ",k);
            k=(k-5);
        }
        printf("\n");
    }
}