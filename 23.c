// 1********1
// 12******21
// 123****321
// 1234**4321
// 1234554321

#include <stdio.h>
int main(){
    int i,j,s,n;
    printf("Enter the range : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j<=i){
                printf("%d",j);
            }else{
                printf("*");
            }
        }
        for(j=n;j>=1;j--){
            if(j<=i){
                printf("%d",j);
            }else{
                printf("*");
            }
        }
        printf("\n");

    }
    
}