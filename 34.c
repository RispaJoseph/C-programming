#include <stdio.h>
int main(){
    int i,j;

    for(i=1;i<=6;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(j=6;j>=1;j--){
            if(j<=i){
                printf("%d",j);
            }
            
        }
        printf("\n");
    }
}

// 11
// 1221
// 123321
// 12344321
// 1234554321
// 123456654321