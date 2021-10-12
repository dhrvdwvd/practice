#include <iostream>
#include <stdlib.h>

using namespace std;

int max(int a, int b)
{
    if(a>b) return a;
    return b;
}
struct bstNode
{
    int data;
    struct bstNode* left;
    struct bstNode* right;
};

struct bstNode* newNode(int x)
{
    struct bstNode* temp = (struct bstNode*) malloc(sizeof(struct bstNode));
    (*temp).data = x;
    (*temp).left = NULL; (*temp).right = NULL;
    return temp;
}

struct bstNode* Insert(struct bstNode* root, int x)
{
    if(root == NULL) // then the tree is empty
    {
        root = newNode(x);
    }
    else if((*root).data >= x) // then insert in left subtree
    {
        (*root).left = Insert((*root).left, x);
    }
    else // then insert in right subtree
    {
        (*root).right = Insert((*root).right, x);
    }
    return root;
}

bool Search(struct bstNode* root, int x)
{
    if(root == NULL) return false;
    else if((*root).data == x)
    {
        return true;
    }
    else if((*root).data < x)
    {
        return Search((*root).right, x);
    }
    else
    {
        return Search((*root).left, x);
    }
}

struct bstNode* Minimum(struct bstNode* root)
{
    if(root == NULL) return root;
    else if((*root).left!=NULL)
    {
        return Minimum((*root).left);
    }
    else return root;
}

struct bstNode* Maximum(struct bstNode* root)
{
    if((*root).right!=NULL)
    {
        return Maximum((*root).right);
    }
    return root;
}

int FindHeight(struct bstNode* root)
{
    if(root == NULL) return -1;
    return max(FindHeight((*root).left), FindHeight((*root).left)) + 1;
}
int main()
{
    struct bstNode* root = NULL; // tree is empty
    struct bstNode* minPtr;
    struct bstNode* maxPtr;
    int x;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 12);
    
    printf("Enter a number to search: ");
    scanf("%d",&x);
    if(Search(root,x)) printf("Found\n");
    else printf("Not found\n");
    
    minPtr = Minimum(root);
    maxPtr = Maximum(root);
    printf("Min, max = %d, %d\n", (*minPtr).data, (*maxPtr).data);
    printf("Height of tree is %d",FindHeight(root));
    return 0;
}