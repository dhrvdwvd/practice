#include <iostream>
#include <vector>

using namespace std;

vector<int> A(10);
int front, rear;

bool IsFull()
{
    if(rear==A.size() - 1)
    {
        return true;
    }
    return false;
}

bool IsEmpty()
{
    if(rear==-1 && front==-1)
    {
        return true;
    }
    return false;
}

void Enqueue(int x)
{
    if(IsFull())
    {
        printf("Queue is full.\n");
        return;
    }
    else if(IsEmpty())
    {
        A[0] = x;
        front = 0;
        rear = 0;
    }
    else
    {
        A[++rear] = x;
    }
}

void Dequeue()
{
    if(IsEmpty())
    {
        printf("Queue is empty.\n");
        return;
    }
    else if(front == rear)
    {
        front--;
        rear--;
        return;
    }
    else
    {
        front++;
        return;
    }
}

int Front()
{
    return A[front];
}

void Print()
{
    for(int i=front; i<=rear; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
int main()
{
    front = -1;
    rear = -1;
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(14);
    Enqueue(6);
    Enqueue(8);
    Enqueue(9);
    Print();
    Dequeue();
    Dequeue();
    Print();

    return 0;
}
/* One can use the concept of circular arrays here as well */