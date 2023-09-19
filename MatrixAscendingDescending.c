#include<stdio.h>
void ascending(int arr[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<i+1;j++){
			if(arr[i]<arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
void descending(int arr[],int n){
        int i,j,temp;
        for(i=0;i<n;i++){
                for(j=0;j<i+1;j++){
                        if(arr[i]>arr[j]){
                                temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                        }
                }
        }
}
void main(){
	int matrix[10][10],row,col,i,j;
	printf("Enter size of matrix:");
	scanf("%d%d",&row,&col);
	printf("Enter element:");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<row;i++){
		if((i+1)%2==0){
			descending(matrix[i],col);
		}
		else{
			ascending(matrix[i],col);
		}
	}
	for(i=0;i<row;i++){
                for(j=0;j<col;j++){                                 printf("%d ",matrix[i][j]);
		}
	printf("\n");
	}
	printf("\n");
}

