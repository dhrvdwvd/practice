// Another variation, here head of the linked list is not globally
// defined.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void Insert(struct Node** head, int x)
{
    struct Node* temp = (struct Node *) malloc(sizeof(struct Node));
    (*temp).data = x;
    (*temp).next = *head;
    *head = temp;
}

void Print(struct Node** head)
{
    int count = 0;
    struct Node* temp = *head;
    while(temp!=NULL)
    {
        printf("Element [%d]: %d\n",count, (*temp).data);
        temp = (*temp).next;
        count++;
    }
}
int main()
{
    struct Node* head=NULL;  // empty list
    int i,n,x;
    printf("How many numbers you want to insert? ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &x);
        Insert(&head, x);
    }
    Print(&head);
    return 0;
}