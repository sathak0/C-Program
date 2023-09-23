#include<stdio.h>
void main(){
	int matrix[10][10],i,j,n;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the element");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<n;i++){
		if(i==0){
			for(j=n-1;j>=0;j--){
				printf("%d ",matrix[i][j]);
			}
		}
		else if(i==n-1){
			for(j=n-1;j>=0;j--){
				printf("%d ",matrix[i][j]);
			}
		}
		else{
			printf("%d ",matrix[i][i]);
		}
	}
}
/*
1 2 3
4 5 6
7 8 9

3215987

1 2 3 4
5 6 7 8
9 1 2 3
4 5 6 7

4321627654

*/