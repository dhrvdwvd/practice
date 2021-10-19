#include<iostream>
#include<stdlib.h>

using namespace std;

struct BNode
{
    int data;
    struct BNode* left;
    struct BNode* right;
};

struct BNode* getNewBNode(int x)
{
    struct BNode* temp = (struct BNode*)malloc(sizeof(struct BNode));
    (*temp).data = x;
    (*temp).left = NULL;
    (*temp).right = NULL;
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
        (*root).right = Insert((*root).right, x);
    }
    return root;
}

void DFT_pre(struct BNode* root)
{
    // d l r
    if(root == NULL) return;
    printf("%d ",(*root).data);
    DFT_pre((*root).left);
    DFT_pre((*root).right);
}

void DFT_in(struct BNode* root)
{
    // l d r
    if(root == NULL) return;
    DFT_in((*root).left);
    printf("%d ",(*root).data);
    DFT_in((*root).right);
}

void DFT_post(struct BNode* root)
{
    // l r d
    if(root == NULL) return;
    DFT_post((*root).left);
    DFT_post((*root).right);
    printf("%d ", (*root).data);
}
int main()
{
    struct BNode* root = NULL;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 9);
    root = Insert(root, 12);
    DFT_pre(root);
    printf("\n");
    DFT_in(root);
    printf("\n");
    DFT_post(root);
    return 0;
}