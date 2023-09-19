#include<stdio.h>
void main(){
	int matrix[3][3],positive[10],negative[10],posit=0,negat=0,zeros=0,i,j;
	printf("Enter a Number:");
	for(i=0;i<3;i++){
		scanf("%d%d%d",&matrix[i][0],&matrix[i][1],&matrix[i][2]);
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(matrix[i][j]==0){
				zeros=zeros+1;
			}
			else if(matrix[i][j]<0){
				negative[negat]=matrix[i][j];
				negat=negat+1;
			}
			else{
				positive[posit]=matrix[i][j];
				posit=posit+1;
			}
		}
	}
	printf("Zeros=%d",zeros);
	if(posit>0){
		printf("Positive:");
		for(i=0;i<posit;i++){
			printf("%d ",positive[i]);
		}
	}
	else{
		printf("positive=0");
	}
	if(negat>0){
		printf("Negative:");
		for(i=0;i<negat;i++){
			printf("%d ",negative[i]);
		}
	}
	else{
		printf("Negative:0");
	}
}
