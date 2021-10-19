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
    if (root == NULL)
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

bool IsBSTUtil(struct Bnode* root, int minValue, int maxValue)
{
    if(root == NULL) return true;
    printf("%d-%d\t", minValue, maxValue);
    if((*root).data > minValue && (*root).data < maxValue
    && IsBSTUtil((*root).left, minValue, (*root).data) && 
    IsBSTUtil((*root).right, (*root).data, maxValue)) return true;
    else return false;
}

bool IsBinarySearchTree(struct Bnode* root)
{
    return IsBSTUtil(root, INT_MIN, INT_MAX);
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
    printf("%d ", IsBinarySearchTree(root));
    return 0;
}