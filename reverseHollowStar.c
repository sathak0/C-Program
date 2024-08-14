#include <stdio.h>

int main() {
    int n,sp;
    scanf("%d",&n);
    sp=n*2-4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        if(i==0) {
            for(int j=0;j<n*2-1;j++){
                printf("*");
            }
        }
        else if(i==n-1){
            printf("*");
        }
        else{
            printf("*");
            for(int j=0;j<sp-1;j++){
                printf(" ");
            }
            sp-=2;
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
