#include<stdio.h>
#include<conio.h>
struct node{
int data;
struct node *add;
};
int num,choice=2,i,place,element=0;
struct node *head,*ptr1,*ptr2;
void insertmiddle(){
printf("Enter the place to insert:");
scanf("%d",&place);
if(place<=element){
ptr1=head->add;
for(i=1;i<place-1;i++){
ptr2=ptr1->add;
ptr1=ptr2;
}
printf("Enter the element:");
scanf("%d",&num);
ptr2=(struct node*)malloc(sizeof(struct node));
ptr2->data=num;
ptr2->add=ptr1;
ptr1->add=ptr2;
element++;
}
else{
printf("There is no element in that place");
}}
void insertstart(){
ptr1=head->add;
printf("Enter the element:");
scanf("%d",&num);
ptr2=(struct node*)malloc(sizeof(struct node));
ptr2->data=num;
ptr2->add=ptr1;
head->add=ptr2;
element++;
}
void insertend(){
printf("Enter a element:");
scanf("%d",&num);
ptr1=head->add;
i=1;
while(i<element){
ptr2=ptr1->add;
ptr1=ptr2;
i++;
}
ptr2=(struct node*)malloc(sizeof(struct node));
ptr1->add=ptr2;
ptr2->data=num;
element++;
}
void display(){
if(element==0){
printf("list is empty");
}
else{
ptr1=head->add;
i=0;
while(i<element){
num=ptr1->data;
printf("%d ",num);
ptr2=ptr1->add;
ptr1=ptr2;
i++;
}}}
void deletestart(){
ptr1=head->add;
head->add=ptr1->add;
element--;
free(ptr1);
}
void deletemiddle(){
printf("Enter the place to delete:");
scanf("%d",&place);
if(place<=element){
ptr1=head->add;
i=1;
while(i<place){
ptr2=ptr1->add;
ptr1=ptr2;
}
ptr2=ptr1->add;
ptr2->add=ptr1->add;
free(ptr1);
element--;
}
else{
printf("There is no element in that place");
}
}
void deleteend(){
ptr1=head->add;
i=0;
while(i<element){
ptr2=ptr1->add;
ptr1=ptr2;
i++;
}
free(ptr1);
element--;
}
void main(){
clrscr();
head=(struct node*)malloc(sizeof(struct node));
ptr1=(struct node*)malloc(sizeof(struct node));
head->add=ptr1;
while(choice!=8){
printf("\n1)inInsert in start\n2)Insert in end\n3)Insert in middle\n4)Delete in start\n5)Delete in middle\n6)Delete in middle\n7)Display\n8)Exit\n");
printf("Enter a choice:");
scanf("%d",&choice);
switch(choice){
case 1:
insertstart();
break;
case 2:
insertend();
break;
case 3:
insertmiddle();
break;
case 4:
deletestart();
break;
case 5:
deletemiddle();
break;
case 6:
deleteend();
break;
case 7:
display();
break;
case 8:
printf("Exiting");
}
}}