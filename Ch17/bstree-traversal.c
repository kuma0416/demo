#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef struct treenode{
    int data;
    struct treenode *left;
    struct treenode *right;
} Treenode;

void inorder_bs_tree(Treenode *root){
    if(root==NULL){
        return;
    }
    inorder_bs_tree(root->left);
    printf("data = %d\n", root->data);
    inorder_bs_tree(root->right);
}

void preorder_bs_tree(Treenode *root){
    if(root==NULL){
        return;
    }
    printf("data = %d\n", root->data);
    preorder_bs_tree(root->left);
    preorder_bs_tree(root->right);
}

void postorder_bs_tree(Treenode *root){
    if(root==NULL){
        return;
    }
    postorder_bs_tree(root->left);
    postorder_bs_tree(root->right);
    printf("data = %d\n", root->data);
}

Treenode *insert_bs_tree(Treenode *root, int data){
    Treenode *current = (Treenode *)malloc(sizeof(Treenode));
    if(root == NULL){
        current->data = data;
        current->left = NULL;
        current->right = NULL;
        return current;
    }
    if(data < root->data){
        root->left = insert_bs_tree(root->left, data);//don't forget root->left
    } else {
        root->right = insert_bs_tree(root->right, data);//don't forget root->right
    }
    return root;
}

int main(void){
    Treenode *root = NULL;
    int insert_array[5];
    for(int i=0;i<5;i++){
        scanf("%d", &insert_array[i]);//don't forget &
    }
    for(int i=0;i<5;i++){
        root = insert_bs_tree(root, insert_array[i]);
    }
    printf("preorder\n");
    preorder_bs_tree(root);
    printf("inorder\n");
    inorder_bs_tree(root);
    printf("postorder\n");
    postorder_bs_tree(root);
    return 0;
}