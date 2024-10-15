
#include<stdio.h>
#define Max 4
int q[Max],rear=-1,front=-1,ch,element,item,i;
void insert();
int deletion();
void display();

void main(){
while(1){
    printf("press 1 for Insertion\npress 2 for Deletion\npress 3 for Display\npress 4 for EXIT\n");
    scanf("%d",&ch);
    switch(ch){
    case 1:insertion();break;
    case 2:item=deletion();
           if (item!=-1){
            printf("the deletion element is %d\n",item);
            }
            break;
    case 3:display();break;
    case 4:exit(0);break;
    }

}
}
void insertion(){
  if(rear==Max-1){
    printf("The Queue is full\n");
    return;
  }
  printf("Enter element to insert\n");
  scanf("%d",&element);

  if(rear==-1 && front==-1){
    rear=0;
    front=0;
  }
  else
    rear=rear+1;
  q[rear]=element;
  return;
}

int deletion(){
 if(rear==-1 && front==-1){
    printf("The Queue is empty\n");
    return(-1);
 }
 element=q[front];
 if(front==rear){
    rear=-1;
    front=-1;
    return(element);
 }
 front=front+1;
 return element;
}

void display(){
if(rear==-1 && front==-1){
    printf("The Queue is empty\n");
    return;
}
for (i=front;i<=rear;i++){

    printf("%d\n",q[i]);
}

}
