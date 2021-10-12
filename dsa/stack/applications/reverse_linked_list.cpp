#include <iostream>
#include <stdlib.h>
#include <stack>
using namespace std;

struct Node
{
    int data;
    struct Node * next;
};

struct Node * head;

void Insert(int x)
{
    struct Node * temp = (struct Node *) malloc(sizeof(struct Node));
    (*temp).next = head;
    (*temp).data = x;
    head = temp;
}

void Print()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", (*temp).data);
        temp = (*temp).next;
    }
    printf("\n");
}
void Reverse()
{
    stack<struct Node *> S;
    struct Node *temp = head;
    while (temp != NULL)
    {
        S.push(temp);
        temp = temp->next;
    }
    temp = S.top();
    head = temp;
    S.pop();
    while (!S.empty())
    {
        temp->next = S.top();
        temp = temp->next;
        S.pop();
    }
    temp->next = NULL;
}



int main()
{
    head = NULL;
    Insert(1);
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);
    Insert(6);
    Print();
    Reverse();
    Print();
    return 0;
}