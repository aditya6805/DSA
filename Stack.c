stack program
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int top = -1;
int items_bag;
int stack[MAX];
void push()
{
    if (top == (MAX)-1)
    {
        printf("\nStack is overfow !!\n");
    }
    else 
    {
        for(int i = 0; i < MAX; i++)
       { printf("\nEnter the element: ");
        scanf("%d", &items_bag);
        top = top+1;
        stack[top] = items_bag;}
    }
}
void disp()
{
    if (top == -1)
    {
        printf("Stack is undeflow!!\n");
    }
    else
    {
        printf("\nElements are : ");
        for(int i = 0; i <= top; i++)
        {
            printf("%d,",stack[i]);
        }
    } 
}
void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        for( int i = top; i >= 0; --i)
        {
            printf("%d is deleted\n",stack[i]);
            top=top-1;
        }
    }
}
void main()
{
    int choice;
    while(1)
    {
        printf("\n1 for push \n2 for display \n3 for pop \n4 for exit \nEnter Your Choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: push();
                break;
            case 2: disp();
                break;
            case 3: pop();
                break;
            case 4: exit(0);
                break;
            default: printf("Inavalid input");
        }
    }
}
