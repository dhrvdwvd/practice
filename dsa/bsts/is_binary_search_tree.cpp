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

bool IsLesserBST(struct Bnode* root, int value)
{
    if(root == NULL) return true;
    if((*root).data <= value && IsLesserBST((*root).left,value)) return true;
    else return false;
}

bool IsGreaterBST(struct Bnode* root, int value)
{
    if(root == NULL) return true;
    if((*root).data < value && IsGreaterBST((*root).right, value)) return true;
    else return false;
}

bool IsBinarySearchTree(struct Bnode* root)
{
    if(root == NULL) return true;
    if(IsBinarySearchTree((*root).left) && IsBinarySearchTree((*root).right) 
    && IsLesserBST((*root).left, (*root).data) && IsGreaterBST((*root).right, (*root).data)) return true;
    else return false;
}
int main()
{
    struct Bnode* root = NULL;
    Insert(root, 15);
    Insert(root, 10);
    Insert(root, 20);
    printf("%d ", IsBinarySearchTree(root));
    return 0;
}