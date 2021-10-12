#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void Insert(int x)
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    (*temp).next = head;
    (*temp).data = x;
    head = temp;
}
void Print()
{
    int count=0;
    struct Node* temp = head;
    while(temp!=NULL)
    {
        printf("Element[%d]: %d\n",count,(*temp).data);
        temp = (*temp).next;
        count++;
    }
}

void Reverse()
{
    struct Node* currentNode = head;
    struct Node* nextNode = (*head).next;
    (*head).next = NULL;
    while(next!=NULL)
    {
        
    }
}

int main()
{
    head = NULL;
    Insert(1);
    Insert(2);
    Insert(3);
    Print();
    return 0;
}