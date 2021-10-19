#include<iostream>

using namespace std;

struct BNode
{
    int data;
    struct BNode* left;
    struct BNode* right;
};

struct Node
{
    struct BNode* addrss;
    struct Node* next;
};

struct Node* front;
struct Node* rear;

struct Node* getNewNode(struct BNode* x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    (*temp).addrss = x;
    (*temp).next = NULL;
    return temp;
}

void Enqueue(struct BNode* x)
{
    if(front==NULL)
    {
        front = getNewNode(x);
        rear = front;
        return;
    }
    else if(front == rear)
    {
        rear = getNewNode(x);
        (*front).next = rear;
        return;
    }
    else
    {
        struct Node* temp = getNewNode(x);
        (*rear).next = temp;
        rear = temp;
        return;
    }
}

void Front()
{
    printf("%d ",(*(*front).addrss).data);
    return;
}

void Dequeue()
{
    if(front==NULL)
    {
        printf("Queue is empty.\n");
        return;
    }
    else if(front==rear)
    {
        struct Node* temp = front;
        front = NULL;
        rear = NULL;
        free(temp);
        return;
    }
    else
    {
        struct Node* temp = front;
        front = (*temp).next;
        free(temp);
        return;
    }
}
struct BNode* getNewBNode(int x)
{
    struct BNode* temp = (struct BNode*) malloc(sizeof(struct BNode));
    (*temp).data = x;
    (*temp).left = NULL; (*temp).right = NULL;
    return temp;
}

struct BNode* Insert(struct BNode* root, int x)
{
    if(root == NULL)
    {
        root = getNewBNode(x);
    }
    else if((*root).data >= x)
    {
        (*root).left = Insert((*root).left, x);
    }
    else
    {
        (*root).right = Insert((*root).right,x);
    }
    return root;
}

void BFT(struct BNode* root)
{
    struct BNode* temp = root;
    Enqueue(temp);
    while(front!=NULL)
    {
        temp=(*front).addrss;
        Front();
        Dequeue();
        if((*temp).left!=NULL)
        {
            Enqueue((*temp).left);
        }
        if((*temp).right!=NULL)
        {
            Enqueue((*temp).right);
        }
    }
}
int main()
{
    struct BNode* root = NULL;
    front=NULL;
    rear=NULL;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 12);
    // root = Insert(root, 14);
    // root = Insert(root, 15);
    // root = Insert(root, 16);
    BFT(root);
    return 0;
}