#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top;

void Push(int x)
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    (*temp).data = x;
    (*temp).next = top;
    top = temp;
}

void Pop()
{
    struct Node* temp = top;
    top = (*temp).next;
    free(temp);
}

void Print()
{
    struct Node* temp = top;
    while(temp!=NULL)
    {
        printf("%d ",(*temp).data);
        temp = (*temp).next;
    }
    printf("\n");
}

int main()
{
    top = NULL;
    Push(1);
    Push(2);
    Push(3);
    Print();
    Pop();
    Print();
    return 0;
}