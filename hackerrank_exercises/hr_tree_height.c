#include<stdio.h>

// https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=24-hour-campaign

struct node {
     struct node *left;
     struct node *right;
};

int getHeight(struct node* root) {
     // Write your code here
     if (root == NULL) return 0;
     if (root->left == NULL && root->right == NULL) return 0;
     
     int left = getHeight(root->left);
     int right = getHeight(root->right);
     return 1 + (left > right ? left : right);
 }
 

