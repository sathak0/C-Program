#include<stdio.h>
#include<string.h>
void main(){
	char a[30];
	int len=0,i=0;
	printf("Enter a string:");
	gets(a);
	while(a[i]!='\0'){
		len+=1;
	    i+=1;
	}
	printf("The length of A string is %d",len);
}