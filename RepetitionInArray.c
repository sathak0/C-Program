#include<stdio.h>
void main(){
	int a[10],b[10],n,i,j;
	printf("Enter a limit:");
	scanf("%d",&n);
	printf("Enter a number:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		b[i]=a[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j) continue;
			else if(a[i]==a[j]){
				b[i]=-1;
			}
		}
	}
	for(i=0;i<n;i++){
		if(b[i]!=-1){
			printf("%d ",b[i]);
		}
	}
	printf("\n");
}

