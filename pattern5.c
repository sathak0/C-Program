/*Input 3
  Output
    *
   1 1
  * * *
*/
  #include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int space=n;space>i;space--){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            if(i%2==0){
                printf("%d ",i-1);
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
