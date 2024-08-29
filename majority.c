// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int arr[100],n,size[100],greatest,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        size[i]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                size[i]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(greatest<size[i]){
            greatest=size[i];
            m=i;
        }
    }
    if(size[m]>n/2){
        printf("Majarity:%d",arr[m]);
    }
    else{
        printf("-1");
    }
    return 0;
}
