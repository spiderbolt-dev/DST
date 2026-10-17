/*
 * Ex. No.: 05 - BINARY SEARCH TREE
 * 
 * Aim:
 * To create a Binary Search Tree (BST) and insert values using the C programming language.
 * 
 * Procedure:
 * 1. Start the program.
 * 2. Create a node for each value.
 * 3. Compare the value with the root node.
 * 4. Insert the value into the left subtree if it is smaller; otherwise, insert it into the right subtree.
 * 5. Repeat until all values are inserted.
 * 6. Display the tree using Inorder Traversal.
 * 7. Stop the program.
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node* create(int value)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

void inorder(struct node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main()
{
    struct node *root;

    // Create BST
    root = create(50);
    root->left = create(30);
    root->right = create(70);
    root->left->left = create(20);
    root->left->right = create(40);
    root->right->left = create(60);
    root->right->right = create(80);

    printf("Inorder Traversal:\n");
    inorder(root);
    printf("\n");

    return 0;
}
