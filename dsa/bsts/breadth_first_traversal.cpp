#include <iostream>
#include <stdlib.h>

using namespace std;

struct bstNode
{
    int data;
    struct bstNode* left;
    struct bstNode* right;
};

struct Node
{
    struct bstNode* data;
    struct Node* next;
};

struct Node* front;
struct Node* rear;

struct Node* newNode(struct bstNode* x)
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    (*temp).data = x;
    (*temp).next = NULL;
    return temp;
}

void Enqueue(struct bstNode* x)
{
    if(x==NULL) return;
    struct Node* temp = newNode(x);
    if(front==NULL && rear==NULL)
    {
        front = temp;
        rear = temp;
        return;
    }
    (*rear).next = temp;
    rear = temp;
}

struct bstNode* Dequeue()
{
    if(front==NULL && rear==NULL)
    {
        printf("Queue is empty\n");
        return NULL;
    }
    else if(front==rear)
    {
        struct bstNode* x = (*front).data;
        struct Node* temp = front;
        front = NULL;
        rear = NULL;
        free(temp);
        return x;
    }
    struct Node* temp = front;
    struct bstNode* x = (*temp).data;
    front = (*front).next;
    free(temp);
    return x;
}


struct bstNode* newbstNode(int x)
{
    struct bstNode* temp = (struct bstNode*) malloc(sizeof(struct bstNode));
    (*temp).data = x;
    (*temp).left = NULL;
    (*temp).right = NULL;
}

struct bstNode* Insert(struct bstNode* root, int x)
{
    if(root == NULL)
    {
        struct bstNode* temp = newbstNode(x);
        root = temp;
    }
    else if((*root).data < x)
    {
        (*root).right = Insert((*root).right,x);
    }
    else
    {
        (*root).left = Insert((*root).left, x);
    }
    return root;
}

void breadth_first_traversal(struct bstNode* root)
{
    Enqueue(root);
    struct bstNode* temp = Dequeue();
    Enqueue((*root).left);
    Enqueue((*root).right);
    
}
int main()
{
    return 0;
}