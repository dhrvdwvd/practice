#include<iostream>
#include<stdlib.h>

using namespace std;

struct Bnode
{
    int data;
    struct Bnode* left;
    struct Bnode* right;
};

struct Bnode* getNewBnode(int x)
{
    struct Bnode* temp = (struct Bnode*) malloc(sizeof(struct Bnode));
    (*temp).data = x;
    (*temp).left = NULL;
    (*temp).right = NULL;
    return temp;
}

struct Bnode* Insert(struct Bnode* root, int x)
{
    if(root==NULL)
    {
        root = getNewBnode(x);
    }
    else if((*root).data >= x)
    {
        (*root).left = Insert((*root).left, x);
    }
    else
    {
        (*root).right = Insert((*root).right, x);
    }
    return root;
}

struct Bnode* FindMin(struct Bnode* root)
{
    struct Bnode* temp = root;
    while((*temp).left!=NULL)
    {
        temp = (*temp).left;
    }
    return temp;
}

struct Bnode* GetSuccessor(struct Bnode* root, int x)
{
    struct Bnode* current = root;
    while(((*current).data != x) && (current!=NULL))
    {
        if((*current).data > x)
        {
            current = (*current).left;
        }
        else
        {
            current = (*current).right;
        }
    }
    if((*current).right!=NULL)
    {
        return FindMin((*current).right);
    }
    else
    {
        struct Bnode* successor = NULL;
        struct Bnode* ancestor = root;
        while(ancestor != current)
        {
            if((*current).data < (*ancestor).data)
            {
                successor = ancestor;
                ancestor = (*ancestor).left;
            }
            else
            {
                ancestor = (*ancestor).right;
            }
        }
        return successor;
    }
}
int main()
{
    struct Bnode* root = NULL;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 12);
    printf("%d ", (*GetSuccessor(root, 20)).data);
    return 0;
}