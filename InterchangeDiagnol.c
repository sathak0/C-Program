#include<stdio.h>
void main(){
	int matrix[10][10],row,col,i,j,temp;
	printf("Enter a size:");
	scanf("%d%d",&row,&col);
	printf("Enter a element:");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	temp=matrix[0][0];
        matrix[0][0]=matrix[0][col-1];
        matrix[0][col-1]=temp;
     	temp=matrix[row-1][0];
	matrix[row-1][0]=matrix[row-1][col-1];
	matrix[row-1][col-1]=temp;
	for(i=0;i<row;i++){                                 for(j=0;j<col;j++){                                 printf("%d ",matrix[i][j]);                                                      }
		printf("\n");
        }
}
