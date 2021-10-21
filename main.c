#include <stdio.h>
#include <stdlib.h>
#define size 6
typedef struct
{
    int top;
    int arr[size];
} stack;

void push (stack*, int*);
int data_1 =10 ;
int data_2 =20 ;
int data_3 =30 ;
int data_temp=0;
int main()
{
    stack s1;
    init(&s1);
    pop(&s1, &data_temp);
    push(&s1, &data_1 );
    push(&s1, &data_2 );
    push(&s1, &data_3 );
    push(&s1, &data_1 );
    push(&s1, &data_2 );
    push(&s1, &data_3 );
    push(&s1, &data_1 );
    pop(&s1, &data_temp );
    return 0;
}
void init(stack *p)
{
    p->top=-1;
}
void push (stack *p, int *data)
{
    if (p->top == size-1)
    {
        printf("the stack is full\n");

    }
    else
    {
        p->top++;
        p->arr[p->top]=*data;
        printf("You pushed (%d) in the stack\n", p->arr[p->top]);
    }
}
void pop (stack *p, int *data)
{
    if (p->top ==-1)
    {
        printf("the stack is empty\n");

    }
    else
    {

        *data=p->arr[p->top];
        printf("You poped (%d) from the stack\n", p->arr[p->top]);
        p->top--;
    }

}
