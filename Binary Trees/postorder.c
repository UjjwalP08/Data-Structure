// **************************** Create Binary Tree *****************************
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;

    struct node *left;
    struct node *right;
} tree;

tree *create()
{
    int x;

    tree *new;

    new = (tree *)malloc(sizeof(tree));

    printf("Enter Data or For Exit pree -1\n");
    scanf("%d", &x);

    if (x == -1)
    {
        return 0;
    }

    new->data = x;

    printf("Enter left child of %d\n", x);
    new->left = create();

    printf("Enter right child of %d\n", x);
    new->right = create();

    return new;
}

int postorder(tree *root)
{
    if (root == NULL)
    {
        return 0;
    }

    else
    {

        postorder(root->left);

        postorder(root->right);

        printf("Your Data is %d \n", root->data);
    }
}

int main(int argc, char const *argv[])
{
    tree *root;

    root = NULL;

    root = create();

    postorder(root);
    return 0;
}
