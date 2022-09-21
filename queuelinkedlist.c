#include<stdio.h>
#include<conio.h>
struct node{
    int data;
    struct node *add;
};
int count=0,i,num;
struct node *ptr1,*ptr2,*head;
int enqueue(){
    ptr1=head->add;
    printf("Enter a element:");
    scanf("%d",&num);
    i=1;
    while(i<count){
        ptr2=ptr1->add;
        ptr1=ptr2;
        i++;
    }
    ptr2=(struct node*)malloc(sizeof(struct node));
    ptr2->data=num;
    ptr1->add=ptr2;
    count++;
    return 0;
}
int dequeue(){
    ptr1=head->add;
    printf("%d is removed",ptr1->data);
    ptr2=ptr1->add;
    head->add=ptr2;
    free(ptr1);
    count--;
    return 0;
}
int display(){
    i=0;
    ptr1=head->add;
    while(i<count){
        printf("%d ",ptr1->data);
        ptr2=ptr1->add;
        ptr1=ptr2;
        i++;
    }
    return 0;
}
int peek(){
    ptr1=head->add;
    printf("%d",ptr1->data);
    return 0;
}

void main(){
    int choice=1;
    clrscr();
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter a element:");
    scanf("%d",&num);
    ptr1=(struct node*)malloc(sizeof(struct node));
    count++;
    ptr1->data=num;
    head->add=ptr1;
    while(choice!=5){
        printf("\n1)Enqueue\n2)Dequeue\n3)Peek\n4)Display\n5)Exit\n");
        printf("Enter a choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            case 5:
            printf("Exiting..");
            break;
            
        }
    }
    getch();
}
