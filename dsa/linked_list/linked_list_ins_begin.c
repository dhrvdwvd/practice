#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

struct Node * head;

void Insert(int x)
{
    // inserts a node at the beginning
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    (*temp).data = x;
    (*temp).next = head;
    head = temp;
}

void Print()
{
    // prints all the data stored in the nodes
    int count=0;
    struct Node* temp;
    temp = head;
    while(temp!=NULL)
    {
        printf("Element [%d]: %d\n",count, (*temp).data);
        temp = (*temp).next;
        count++;
    }
}

int main()
{
    head = NULL; // empty list
    int i, n, x;
    printf("How many numbers to insert? ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        Insert(x);
    }
    Print();
    return 0;
}