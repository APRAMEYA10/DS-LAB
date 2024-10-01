#include<stdio.h>
#define MAX 3
int s[10],top=-1,i,item,X;
void main()
{
    while(1)
    {
        printf("press 1 for push\npress 2 for pop\npress 3 for display\npress 4 for exit\n");
        scanf("%d",&X);
        switch(X)
        {
            case 1:push();break;
            case 2:item=pop();
            if(item!=-1)
                printf("popped element is %d\n",item);break;
            case 3:display();break;
            case 4:exit(0);
        }
    }
    getch();
}
void push()
{
    if(top==MAX-1)
    {
        printf("stack overflow\n");
        return;
    }
    printf("enter element to be pushed\t");
    scanf("%d",&item);
    top=top+1;
    s[top]=item;
}

int pop()press 1 for push
{
    if(top==-1)
        return(-1);
    item=s[top];
    top=top-1;
    return(item);
}

void display()
{
    if(top==-1)
    {
        printf("stack is empty");
        return;
    }
    printf("Stack Contents\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",s[i]);
    }
}
