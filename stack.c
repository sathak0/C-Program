#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *add;
};
struct node *ptr1,*head,*ptr2;
int element=0,num,i;
int push(){
        printf("Enter a element:");
        scanf("%d",&num);
        ptr1=head->add;
        i=1;
        while(i<element){
            i++;
            ptr2=ptr1->add;
            ptr1=ptr2;
        }
        element++;
        ptr2=(struct node*)malloc(sizeof(struct node));
        ptr2->data=num;
        ptr1->add=ptr2;
   return 0;
}
int display(){
  if(element==0){
  printf("Linkedlist is empty");
  return 0;
}
  else{
   int i=1;
   ptr1=head->add;
   while(i<=element){
     i++;
     num=ptr1->data;
     printf(" %d",num);
     ptr2=ptr1->add;
     ptr1=ptr2;
}
return 0;
}
}
int pop(){
if(element==0){
printf("Stack is empty");
return 0;
}
else{
i=1;
ptr1=head->add;
while(i<=element){
ptr2=ptr1->add;
ptr1=ptr2;
i++;
}
free(ptr1);
element--;
return 0;
}
}
int main(){
    int choice=1;
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter a element:");
    scanf("%d",&num);
    ptr1=(struct node*)malloc(sizeof(struct node));
    ptr1->data=num;
    head->add=ptr1;
    element++;
    while(choice!=4){
    printf("\n1)Push\n2)Pop\n3)Display\n4)Exit\n");
    printf("Enter a choice:");
    scanf("%d",&choice);
    switch(choice){
    case 1:
     push();
    case 2:
     pop();
     break;
    case 3:
     display();
     break;
    case 4:
     printf("Exiting..");
}
}}
