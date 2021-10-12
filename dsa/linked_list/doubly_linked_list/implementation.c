#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head;

struct Node* getNewNode(int x)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    (*newNode).data = x;
    (*newNode).next = NULL;
    (*newNode).prev = NULL;
    return newNode;
}
void InsertAtHead(int x)
{
    struct Node* temp = getNewNode(x);
    if(head == NULL)
    {
        head = temp;
        return;
    }
    (*temp).next=head;
    (*head).prev=temp;
    head = temp;
}

void InsertAtTail(int x)
{
    struct Node* temp = getNewNode(x);
    struct Node* current = head;
    if(current==NULL)
    {
        head = temp;
        return;
    }
    while((*current).next!=NULL)
    {
        current = (*current).next;
    }
    (*current).next = temp;
    (*temp).prev = current;
}
void Print()
{
    struct Node* temp = head;
    while(temp!=NULL)
    {
        printf("%d ",(*temp).data);
        temp = (*temp).next;
    }
    printf("\n");
}

void ReversePrint(struct Node* p)
{
    if((*p).next==NULL)
    {
        printf("%d ", (*p).data);
        return;
    }
    ReversePrint((*p).next);
    printf("%d ", (*p).data);
}

int main()
{
    head = NULL;
    InsertAtHead(3);
    InsertAtHead(2);
    InsertAtHead(1);
    InsertAtTail(4);
    InsertAtTail(5);
    Print();
    ReversePrint(head);
    return 0;
}