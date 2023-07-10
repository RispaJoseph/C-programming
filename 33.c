#include <stdio.h>
int main(){
    int i,j,s;

    for(i=1;i<=5;i++){
        for(s=1;s<=i;s++){
            printf(" ");
        }
        for(j=1;j<=(5+1)-i;j++){
            printf("%d ",j*i);
        }
        printf("\n");
    }
}

// 1 2 3 4 5
//  2 4 6 8
//   3 6 9
//    4 8
//     5