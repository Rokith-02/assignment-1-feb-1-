#include<stdio.h>
#define max 5
int front=0;
int rear=0;
int que[max];
void enqueue();
void display();
void dequeue();
int main()
{
        int op;
        while(1){
        printf("Enter your option 1)enqueue 2)dequeue 3)display 4)exit\n");
        scanf("%d",&op);
        switch(op)
        {
                case 1:enqueue();break;
                case 2:dequeue();break;
                case 3:display();break;
                case 4:return 0;
                default:printf("invalid option\n");return 0;
        }
        }
}
void enqueue()
{
        if(rear==max)
        {
                printf("queue overflow\n");
                return;
        }
        int ele;
        printf("enter the element\n");
        scanf("%d",&ele);
        que[rear++]=ele;
}
void display()
{
	int i;
        for(i=0;i<max;i++)
        printf(" %d ",que[i]);
        printf("\n");
}
void dequeue()
{
        if(rear==0||rear==front)
        {
                printf("q is underflow\n");
                return ;
        }
        que[front++]=0;
}
