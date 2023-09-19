#include<stdio.h>
void main(){
	int matrix[10][10],i,j,row,col,column;
	printf("Enter a size of a matrix:");
	scanf("%d%d",&row,&col);
	printf("Enter a element:");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Enter a column to delete:");
	scanf("%d",&column);
	for(i=0;i<row;i++){
		for(j=(column-1);j<col-1;j++){
			matrix[i][j]=matrix[i][j+1];
		}
	}
	for(i=0;i<row;i++){
		for(j=(col-1);j<col;j++){
			matrix[i][j]=-1;
		}
	}
	for(i=0;i<row;i++){
                for(j=0;j<col;j++){
                        printf("%d ",matrix[i][j]);
                }
		printf("\n");
        }
	printf("\n");
}
