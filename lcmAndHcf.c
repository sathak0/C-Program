// Online C compiler to run C program online
#include <stdio.h>
int lcm(int n1,int n2);
int gcd(int n1,int n2);
int main() {
    printf("%d\n",lcm(10,15));
    printf("%d",gcd(13,7));
    return 0;
}
int lcm(int n1,int n2){
    int max,lcm;
    max=(n1>n2)?n1:n2;
    lcm=max;
    while((lcm%n1!=0) || (lcm%n2!=0)){
        lcm+=max;
    }
    return lcm;
}
int gcd(int n1,int n2){
    int gcd;
    for(int i=1;i<=n1&&i<=n2;i++){
        if((n1%i==0)&&(n2%i==0)){
            gcd=i;
        }
    }
    return gcd;
}
