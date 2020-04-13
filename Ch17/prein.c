#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

typedef struct treenode{
    char data;
    struct treenode *left;
    struct treenode *right;
} Treenode;

void postorder(Treenode *root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("c = %c\n", root->data);
}

Treenode *construct(int n, char pre[], char in[]){
    Treenode *current = (Treenode *)malloc(sizeof(Treenode));
    int leftn;
    int rightn;

    if(n==0)
        return NULL;
    leftn = strchr(in, pre[0]) - in;//找左邊的長度
    rightn = n-leftn-1;//找右邊長度
    current->data = pre[0];
    current->left = construct(leftn, pre+1, in);//+1去掉頭
    current->right = construct(rightn, pre+leftn+1, in+leftn+1);//+1去掉root再加leftn去掉左邊值
    return current;
}

int main(void){
    int length;
    char preorder[80];
    char inorder[80];
    Treenode *root;

    scanf("%s", preorder);
    scanf("%s", inorder);
    length = strlen(preorder);
    root = construct(length, preorder, inorder);
    postorder(root);
    return 0;
}