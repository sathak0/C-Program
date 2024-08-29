
#include <stdio.h>
#include<string.h>
int main() {
    int length,match[100],greatest=0,greatKey;
    char array[20][20],string[20];
    scanf("%d",&length);
    for(int i=0;i<length;i++){
        scanf("%s",array[i]);
        match[i]=0;
    }
    printf("Enter a match string:");
    scanf("%s",string);
    for(int i=0;i<length;i++){
       
        for(int j=0;j<strlen(array[i]);j++){
            if(array[i][strlen(array[i])-j-1]==string[strlen(string)-1-j]){
                match[i]++;
            }
            else{
                break;
            }
        }
    }
    for(int i=0;i<length;i++){
        if(greatest<match[i]){
            greatest=match[i];
            greatKey=i;
        }
    }
    printf("%s",array[greatKey]);
    
    return 0;
}
