#include <stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter the no.of rows : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--){
        for(j=1;j<=i*2;j++){
            printf("X ");
        }
        printf("\n");
        for(k=1;k<=1;k++){
            printf("X\n");
        }
    }
}

// X X X X X X 
// X
// X X X X
// X
// X X
// X