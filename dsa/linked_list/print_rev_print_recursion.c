#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* Insert(struct Node* head, int x)
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    (*temp).data = x;
    (*temp).next = head;
    head = temp;
    return head;
}

void Print(struct Node* head)
{
    if(head == NULL) return;
    printf("%d ",(*head).data);
    Print((*head).next);
}
void reversePrint(struct Node* head)
{
    if((*head).next == NULL) return;
    Print((*head).next);
    printf("%d ",(*head).data);
}
int main()
{
    struct Node* head = NULL;
    head = Insert(head, 2);
    head = Insert(head, 3);
    reversePrint(head);
    return 0;
}