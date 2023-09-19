#include<stdio.h>
void main(){
	int matrix[5][5],sum=0,i,j,row,col;
	printf("Enter a row size:");
	scanf("%d",&row);
	printf("Enter a col size:");
	scanf("%d",&col);
	printf("Enter a element\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<row;i++){
                for(j=0;j<col;j++){                                     sum=sum+matrix[i][j];
                }
        }
	printf("Enter a position to remove:");
	scanf("%d%d",&row,&col);
	sum=sum-matrix[row][col];
	printf("Sum = %d\n",sum);
}

