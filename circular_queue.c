#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int q[10],rear=-1,front=-1,item,element,ch,size=MAX;
void insert();
int deletion();
void display();

void main(){
while(1){
    printf("1:insert\n2:delete\n3:display\n4:exit\n");
    scanf("%d",&ch);
    switch(ch){
    case 1:insert();break;
    case 2:element=deletion();
    if(element!=-1){
        printf("the popped element is %d\n",element);
    }break;
    case 3:display();break;
    case 4:exit(0);break;
    }
}
}

void insert(){
if (front==(rear+1)%size){
    printf("the queue is full\n");
    return;
}
if (front==-1 && rear==-1){
    front=0;
    rear=0;
    }
    else {
            rear=(rear+1)%size;
    }
        printf("enter the element to insert\t");
        scanf("%d",&item);
        q[rear]=item;

}

int deletion(){
if (rear==-1 &&front==-1){
    printf("queue is empty");
}
item=q[front];
if(front==rear){
    rear=-1;
    front=-1;
    return(item);
}
front=(front+1)%size;
return(item);
}

void display(){
if(front==-1 && rear==-1){
    printf("queue is empty");
    return;
}
if (front<=rear){
    for (int i=front;i<=rear;i++){
        printf("elements are %d\n",q[i]);
    }
}

   else{
        for (int i=front;i<=MAX;i++){
            printf("elements are %d\n",q[i]);
        }
    }
}

