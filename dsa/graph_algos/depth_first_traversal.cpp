#include<iostream>
#include<stdlib.h>
#include<stack>

using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

struct Node* makenode(int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    (*temp).data = x;
    (*temp).next = NULL;
    return temp;
}
struct Node* Insert(struct Node* head, int x)
{
    if(head==NULL)
    {
        head = makenode(x);
        return head;
    }
    else
    {
        struct Node* temp = makenode(x);
        (*temp).next = head;
        head = temp;
        return head;
    }
}

// graph looks like:  a ---> c
//                    |      |
//                    v      v
//                    b      e
//                    |
//                    v
//                    d ---> f

// a: 0, b: 1, c: 2, d: 3, e: 4, f: 5

void Depth_traversal(struct Node* head)
{
    stack<struct Node*> S;
    S.push(head);
    while(!S.empty())
    {
        struct Node* temp = S.top();
        printf("%d ", (*temp).data);
        S.pop();
        while((*temp).next!=NULL)
        {
            S.push((*temp).next);
        }
    }
}

int main()
{
    struct Node* heads[6] = {NULL};
    // a points to b and c, so:
    heads[0] = Insert(heads[0], 1);
    heads[0] = Insert(heads[0], 2);
    heads[1] = Insert(heads[1], 3);
    heads[2] = Insert(heads[2], 4);
    heads[3] = Insert(heads[3], 5);
    Depth_traversal(heads[0]);
    return 0;
}