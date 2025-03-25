#include<stdio.h>

struct node {
     int data;
     struct node *left;
     struct node *right;
};

int get_height(struct node *root) {
     if (root == NULL) return 0;
     int leftHeight = get_height(root->left);
     int rightHeight = get_height(root->right);
     if (leftHeight > rightHeight) {
         return leftHeight + 1;
     } else {
         return rightHeight + 1;
     }
 }
 
 void print_level(struct node *root, int level) {
     if (root == NULL) return;
     if (level == 1) {
         printf("%d ", root->data); // last level
     } else if (level > 1) {
         print_level(root->left, level - 1);
         print_level(root->right, level - 1);
     }
 }
 
 void levelOrder( struct node *root) {
     int h = get_height(root);
     for (int i = 1; i <= h; i++) {
         print_level(root, i);
     }
 }
 