#include <stdio.h>

// https://www.hackerrank.com/challenges/tree-postorder-traversal/problem?isFullScreen=true

struct node {
     int data;
     struct node *left;
     struct node *right;
};

void postOrder( struct node *root) {
     if (root == NULL) return;
 
     if (root->left != NULL) {
         postOrder(root->left);
     }
     if (root->right != NULL) {
         postOrder(root->right);
     }
     
     printf("%d ", root->data);
 
 }
 