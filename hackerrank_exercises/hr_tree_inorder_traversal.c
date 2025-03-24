#include<stdio.h>

struct node {
     int data;
     struct node *left;
     struct node *right;
};

void inOrder( struct node *root) {
     if (root == NULL) return;
     
     inOrder(root->left);
     printf("%d ", root->data);
     inOrder(root->right);
 } 