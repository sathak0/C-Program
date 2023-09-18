#include<stdio.h>
struct node{
    int data;
    struct node *add;
};
struct node *ptr1,*head,*ptr2;
int count,num,i;
void push(){
	printf("Enter a element:");
	scanf("%d",&num);
	ptr1=head->add;
	i=1;
	while(i<count){
	    i++;
	    ptr2=ptr1->add;
	    ptr1=ptr2;
	}
	count++;
	ptr2=(struct node*)malloc(sizeof(struct node));
	ptr2->data=num;
	ptr1->add=ptr2;
}
void display(){
  if(count==0){
  printf("Linkedlist is empty");
}
  else{
   int i=1;
   ptr1=head->add;
   while(i<=count){
     i++;
     num=ptr1->data;
     printf(" %d",num);
if(count==0){
printf("Stack is empty");
}
else{
i=1;
ptr1=head->add;
while(i<count){
ptr2=ptr1->add;
ptr1=ptr2;
i++;
}
num=ptr1->data;
printf("%d is removed",num);
free(ptr1);
count--;
}
}
void main(){
    int choice=1;
    clrscr();
    count=0;
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter a element:");
    scanf("%d",&num);
    ptr1=(struct node*)malloc(sizeof(struct node));
    ptr1->data=num;
    head->add=ptr1;
    count++;
    while(choice!=4){
    printf("\n1)Push\n2)Pop\n3)Display\n4)Exit\n");
    printf("Enter a choice:");
    scanf("%d",&choice);
    switch(choice){
    case 1:
     push();
     break;
    case 2:
     pop();
     break;
    case 3:
     display();
     break;
    case 4:
     printf("Exiting..");
}
}
getch();
}
