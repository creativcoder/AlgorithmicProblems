#include<stdio.h>
#include<malloc.h>

typedef struct node {
int data;
struct node *left;
struct node *right;
}node;

node *root=NULL;

node* create_node(int);
void del(node *root);
void inorder(node *root);
void preorder(node *root);
void postorder(node *root);

void ins(node *root,int data) {
  if(root==NULL)
  { 
    root = (node*)malloc(sizeof(node));
    root=create_node(data);
  }
  else if(root!=NULL && root->data >= data)
    ins(root->right,data);
  else ins(root->left,data);
}

void preorder(node *root) {
  if(root!=NULL){
    preorder(root->left);
    printf("%d\n",root->data);
    preorder(root->right);
  }
}

node* create_node(int data){
  node *temp = (node*)malloc(sizeof(node));
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}

int main(int argc,char *argv[]) {
ins(root,2457);
printf("%p",root);

}
