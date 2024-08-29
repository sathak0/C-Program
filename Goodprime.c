#include <stdio.h>
int goodPrime(int n){
    int sum=0,i=2;
    int key=1;
    while(n!=0){
        sum+=n%10;
        n=n/10;
    }
    while(i<sum){
        if(sum%i==0){
            key=0;
            break;
        }
        i++;
    }
    if(sum==1){
            key=0;
        }
    return key;
}
int main() {
    int n,k,i=0,kthprime;
    scanf("%d %d",&n,&k);
    while(i<k){
        if(goodPrime(n)){
            kthprime=n;
            i++;
        }
        n++;
    }
    printf("%d ",kthprime);
    return 0;
}
