#include<stdio.h>
#include<malloc.h>

typedef struct node {
int data;
struct node *left;
struct node *right;
}node;

node *root=NULL;

void delete(node *root) {}

void inorder(node *root) {}
void preorder(node *root) {}
void postorder(node *root) {}

void insert(node *root,int data) {
  node *temp = (node*)malloc(sizeof(node));
  temp->left=NULL;
  temp->right=NULL;
  if(root!=NULL) {
  if(root->data<=data) insert(root->left,data);
  else insert(root->right,data);
  }
  else { temp->data = data;
  root = temp;
  }
}

int main(int argc,char *argv[]) {
insert(root,34);
insert(root,67);
}
