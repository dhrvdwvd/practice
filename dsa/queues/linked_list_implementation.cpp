#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

struct Node* front;
struct Node* rear;

struct Node* newNode(int x)
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    (*temp).data = x;
    (*temp).next = NULL;
    return temp;
}

void Enqueue(int x)
{
    struct Node* temp = newNode(x);
    if(front==NULL && rear==NULL){ // inserting first element
        front = temp;
        rear = temp;
    }
    else  // one or more than one element in the queue.
    {
        (*rear).next = temp;
        rear = temp;
    }
}

void Dequeue()
{
    struct Node* temp = front;
    if(front==NULL) // no elements to remove
    {
        return;
    }
    else if(front==rear) // only one element
    {
        front==NULL;
        rear==NULL;
        free(temp);
        return;
    }
    // more than one element
    front = (*front).next;
    free(temp);
}

void Print()
{
    struct Node* temp = front;
    while(temp!=NULL)
    {
        printf("%d ", (*temp).data);
        temp = (*temp).next;
    }
    printf("\n");
}

int main()
{
    front = NULL;
    rear = NULL;
    Enqueue(6);
    Enqueue(5);
    Enqueue(4);
    Enqueue(3);
    Print();
    Enqueue(2);
    Enqueue(1);
    Print();
    Dequeue();
    Dequeue();
    Dequeue();
    Print();

    return 0;
}