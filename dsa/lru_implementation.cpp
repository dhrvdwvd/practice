#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
};

vector<struct Node*> head_tail = {NULL, NULL};

struct Node* getNewNode(int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    (*temp).data = x;
    (*temp).prev = NULL;
    (*temp).next = NULL;
    return temp;
}

void Insert(int x)
{
    if((head_tail[0]==NULL) &&(head_tail[1] == NULL))
    {
        head_tail[0] = getNewNode(x);
        head_tail[1] = head_tail[0];
        return;
    }
    else
    {
        struct Node* temp = getNewNode(x);
        (*temp).next = head_tail[0];
        (*(head_tail[0])).prev = temp;
        head_tail[0] = temp;
        return;
    }
}

void Delete(struct Node* addrss)
{
    struct Node* temp = addrss;
    struct Node* temp1 = (*temp).prev;
    struct Node* temp2 = (*temp).next;
    (*temp1).next = (*temp).next;
    (*temp2).prev = (*temp).prev;
    free(temp);
}

void Print()
{
    struct Node* temp = head_tail[0];
    while(temp!=NULL)
    {
        cout << (*temp).data << " ";
        temp = (*temp).next;
    }
}
int maximum_size = 2;
vector<struct Node*> cached;

void put(int x)
{
    if(cached.size()<maximum_size)
    {
        Insert(x);
    }
}
int main()
{
    Insert(1);
    Insert(2);
    Insert(3);
    Print();
    cout << "\n";
    Delete(head_tail[0]->next);
    Print();
}