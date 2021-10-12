#include <stdio.h>
#define MAX_SIZE 51

char A[MAX_SIZE];
int top = -1; // initially stack is empty.

void Push(char x)
{
    if(top == MAX_SIZE-1)
    {
        printf("Error: stack overflow.\n");
        return;
    }
    A[++top] = x;
}

int Top()
{
    return A[top];
}

void Pop()
{
    top--;
}

int main()
{
    char s[51];
    int i=0;
    printf("Enter the string to be reversed: ");
    scanf("%s",s);
    printf("You entered: %s\n",s);
    while(s[i]!='\0')
    {
        Push(s[i]);
        i++;
    }
    i = 0;
    while(top!=-1)
    {
        s[i] = Top();
        i++;
        Pop();
    }
    printf("%s", s);
    return 0;
}