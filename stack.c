#include<stdio.h>
#define max 5
int stk[max];
int top=0;
void push();
void pop();
void display();
int main()
{
        int op;
        while(1){
        printf("select the option 1)push 2)pop 3)display 4)exit\n");
        scanf("%d",&op);
        switch(op)
        {
                case 1:push();break;
                case 2:pop();break;
                case 3:display();break;
                case 4:return 0;
                default:printf("invalid option\n");return 0;
        }
        }
}
void push()
{
        if(top==max)
        {
                printf("stack overflow\n");
                return;
        }
        int ele;
        printf("enter the element\n");
        scanf("%d",&ele);
        stk[top++]=ele;
}
void pop()
{
        if(top==0)
	{
		printf("stack underflow\n");
                return;
        }
        printf("%d is poped\n",stk[top-1]);
        stk[--top]=0;
}
void display()
{
        if(top==0)
        {
                printf("stack is empty\n");
                return;
        }
        int i;
        for(i=0;i<=top;i++)
        printf("%d ",stk[i]);
        printf("\n");
}
