#include <stdio.h>

int main() {
    int n,sp=1;;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            printf(" ");
        }
        if(i==0) printf("*");
        else if(i==n-1){
            for(int j=0;j<n*2-1;j++){
             printf("*");
            }
        }
        else{
            printf("*");
            for(int j=0;j<sp;j++){
                printf(" ");
            }
            printf("*");
            sp+=2;
        }
        printf("\n");
    }
    return 0;
}
