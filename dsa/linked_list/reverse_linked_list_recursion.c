#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head;  // global variable

void Insert(int x)
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    (*temp).data = x;
    (*temp).next = head;
    head = temp;
}

void Print()
{
    struct Node* temp = head;
    while(temp!=NULL)
    {
        printf("%d ", (*temp).data);
        temp = (*temp).next;
    }
}

void Reverse(struct Node* p)
{
    if((*p).next==NULL)
    {
        head = p;
        return;
    }
    Reverse((*p).next);
    struct Node* nextNode = (*p).next;
    (*nextNode).next = p;
    (*p).next = NULL;
}

int main()
{
    head = NULL;
    Insert(3);
    Insert(2);
    Insert(1);
    Print();
    Reverse(head);
    Print();
    return 0;
}