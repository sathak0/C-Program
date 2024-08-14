#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int st=n*2-1;
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
            printf(" ");
        }
        for(int j=0;j<st;j++){
            printf("*");
        }
        st-=2;
        printf("\n");
    }
    return 0;
}
