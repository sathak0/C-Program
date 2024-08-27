#include <stdio.h>

int main() {
    // Write C code here
    int row1=3,col1=2,row2=2,col2=3;
    int a[3][3]={{1,2},{3,4},{5,6}},b[3][3]={{1,2,3},{4,5,6}},c[3][3];
    if(col2!=row1){
        printf("Invalid Matrix");
    }
    else{
        for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            c[i][j]=0;
            for(int k=0;k<col1;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
            // c[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
        
    }
    
    return 0;
}
