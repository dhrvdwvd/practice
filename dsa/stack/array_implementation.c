#include <stdio.h>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;
void push(int x)
{
    if(top == MAX_SIZE - 1)
    {
        printf("Error: stack overflow\n");
        return;
    }
    A[++top] = x;
}

void pop()
{
    top--;
}

int Top()
{
   return A[top];
}
void Print()
{
    printf("Stack: ");
    for(int i=0; i<=top; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main()
{
    push(2);
    printf("%d\n",Top());
    push(3);
    push(4);
    printf("%d\n",Top());
    pop();
    push(5);
    Print();
    return 0;
}

/******************************************************************
 *   This is not the ideal implementation, first there is no func *
 *   for printing the elements in the stack.  Also, there should  *
 *   a data structure of type stack. This can be done using the   *
 *   struct data type in C or by OOP approach in C++              *
 *****************************************************************/
