#include<stdio.h>
#include<conio.h>
void main(){
	int pr=0,n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
			pr=1;
			break;
		}

	}
	if(pr==1){
		printf("not a Prime number");
	}
	else{
        printf("prime number");
	}
}