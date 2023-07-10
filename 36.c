#include <stdio.h>
int main(){
    int i,k,j;
    for(i=1;i<=3;i++){
        for(j=1;j<=2*3;j++){
            if(j%2==0){
                printf("*");
            }
            printf("\n");
            for(k=1;k<=2*3;k++){
                if(k%2!=0){
                    printf("*");
                }
                // printf("\n");
            }
        }
        // printf("\n");
    }
}