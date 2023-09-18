#include<stdio.h>
void main(){
	int temp,arr[10],i,n,pos,element;
	printf("Enter the limit:");
	scanf("%d",&n);
	printf("Enter element:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the position to insert:");
	scanf("%d",&pos);
	printf("Enter a element:");
	scanf("%d",&element);
	n=n+1;
	for(i=0;i<n;i++){
		if(pos==i+1){
			temp=arr[i];
			arr[i]=element;
	         }
                 else if(pos<i+1){
	                element=arr[i];			
			arr[i]=temp;
			temp=element;
		}
	
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}




