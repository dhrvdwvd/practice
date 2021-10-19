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
    struct Bnode* temp = (struct Bnode*)malloc(sizeof(struct Bnode));
    (*temp).data = x;
    (*temp).left = NULL;
    (*temp).right = NULL;
    return temp;
}

struct Bnode* Insert(struct Bnode* root, int x)
{
    if(root == NULL)
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
    while((*temp).left != NULL)
    {
        temp = (*temp).left;
    }
    return temp;
}

struct Bnode* Delete(struct Bnode* root, int x)
{
    struct Bnode* temp = root;
    if(root == NULL) return root;
    else if(x > (*root).data)
    {
        (*root).right = Delete((*root).right, x);
    }
    else if(x < (*root).data)
    {
        (*root).left = Delete((*root).left, x);
    }
    else
    {
        if(((*root).left == NULL) && ((*root).right == NULL))
        {
            free(root);
        }
        else if((*root).left == NULL)
        {
            struct Bnode* temp = root;
            root = (*root).right;
            free(temp);
        }
        else if((*root).right == NULL)
        {
            struct Bnode* temp = root;
            root = (*root).left;
            free(temp);
        }
        else
        {
            struct Bnode* temp = FindMin((*root).right);
            (*root).data = (*temp).data;
            (*root).right = Delete((*root).right, (*temp).data);
        }
    }
    return root;
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
    return 0;
}