#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void Insert(int d, int n)
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    if(n>1)
    {
        struct Node* prevNode=head;
        for(int i=0; i<n-2; i++)
        {
            prevNode = (*prevNode).next;
        }
        (*temp).next = (*prevNode).next;
        (*prevNode).next = temp;
        (*temp).data = d;
        return;
    }
    else
    {
        (*temp).data = d;
        (*temp).next = head;
        head = temp;
        return;
    }
}
void Delete(int n)
{
    struct Node* temp = head;
    struct Node* deletedNode;
    if(n>1)
    {
        for(int i=0; i<n-2; i++)
        {
            temp = (*temp).next;
        }
        deletedNode = (*temp).next;
        (*temp).next = (*(*temp).next).next;
        free(deletedNode);
    }
    else
    {
        deletedNode = head;
        head = (*head).next;
        free(deletedNode);
    }
    return;
}

void Print()
{
    int count=0;
    struct Node* temp = head;
    while(temp!=NULL)
    {
        printf("Element [%d]: %d\n", count, (*temp).data);
        temp = (*temp).next;
        count++;
    }
    return;
}

int main()
{
    head = NULL;
    Insert(2,1);
    Insert(3,2);
    Insert(4,3);
    Print();
    Delete(1);
    Print();
    return 0;
}