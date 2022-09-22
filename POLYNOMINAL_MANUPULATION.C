#include<stdio.h>
#include<conio.h>
struct node{
int data;
struct node *add;
};
void main(){
struct node *head1,*ptr3,*ptr4,*ptr5,*ptr6,*head2,*result,*ptr1,*ptr2;
int i,num;
clrscr();
head1=(struct node*)malloc(sizeof(struct node));
head2=(struct node*)malloc(sizeof(struct node));
result=(struct node*)malloc(sizeof(struct node));
printf("Enter a first equation\n");
ptr1=(struct node*)malloc(sizeof(struct node));
printf("Enter 4th coefficient:");
scanf("%d",&num);
head1->add=ptr1;
ptr1->data=num;
for(i=3;i>=0;i--){
printf("Enter %dth coefficient:",i);
scanf("%d",&num);
ptr2=(struct node*)malloc(sizeof(struct node));
ptr1->add=ptr2;
ptr2->data=num;
ptr1=ptr2;
}

printf("Enter a second equation\n");
ptr1=(struct node*)malloc(sizeof(struct node));
printf("Enter 4th coefficient:");
scanf("%d",&num);
head2->add=ptr1;
ptr1->data=num;
for(i=3;i>=0;i--){
printf("Enter %dth coefficient:",i);
scanf("%d",&num);
ptr2=(struct node*)malloc(sizeof(struct node));
ptr1->add=ptr2;
ptr2->data=num;
ptr1=ptr2;
}
printf("FIRST EQUATION ");
ptr1=head1->add;
for(i=4;i>0;i--){
num=ptr1->data;
ptr2=ptr1->add;
ptr1=ptr2;
printf("(%d)X^%d+",num,i);
}
num=ptr1->data;
printf("(%d)\n",num);
printf("SECOND EQUTION ");
ptr1=head2->add;
for(i=4;i>0;i--){
num=ptr1->data;
ptr2=ptr1->add;
ptr1=ptr2;
printf("(%d)X^%d+",num,i);
}
num=ptr1->data;
printf("(%d)\n",num);
ptr1=(struct node*)malloc(sizeof(struct node));
result->add=ptr1;
ptr2=head1->add;
ptr3=head2->add;
num=(ptr2->data)+(ptr3->data);
ptr1->data=num;
for(i=0;i<4;i++){
ptr4=ptr2->add;
ptr5=ptr3->add;
ptr6=(struct node*)malloc(sizeof(struct node));
ptr1->add=ptr6;
num=(ptr4->data)+(ptr5->data);
ptr6->data=num;
ptr2=ptr4;
ptr3=ptr5;
ptr1=ptr6;
}
printf("RESULT EQUATION ");
ptr1=result->add;
for(i=4;i>0;i--){
num=ptr1->data;
ptr2=ptr1->add;
ptr1=ptr2;
if(num!=0){
printf("(%d)X^%d+",num,i);
}}
num=ptr1->data;
if(num!=0) printf("(%d)\n",num);
getch();
}
