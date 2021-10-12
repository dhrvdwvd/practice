#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;
void Insert(int x, int n)
{
    int current = 0;
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    struct Node* prevNode = head;
    if(n>1) // insert in between
    {
        for(int i=0;i<n-2;i++)
        {
            prevNode = (*prevNode).next;
        }
        (*temp).next = (*prevNode).next;
        (*temp).data = x;
        (*prevNode).next = temp;
    }
    else // insert at beginning
    {
        (*temp).data = x;
        (*temp).next = head;
        head = temp;
    }
}

void Print()
{
    int count=0;
    struct Node* temp = head;
    while(temp!=NULL)
    {
        printf("Element[%d]: %d\n", count, (*temp).data);
        temp = (*temp).next;
        count++;
    }
}

int main() {
    head = NULL; // empty list
    Insert(2,1);
    Insert(3,2);
    Insert(4,3);
    Print();
    return 0;
}