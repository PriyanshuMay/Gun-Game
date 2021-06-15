#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node{
    struct Node* left;
    struct Node* right;
    int data;
}Node;
Node* newNode(int data){
    Node* node=(Node*)malloc(sizeof(Node));
    node->left=node->right=NULL;
    node->data=data;
    return node;
}
#define max(x, y) (((x) > (y)) ? (x) : (y))

int getHeight(Node* root){
if(root==NULL) return 0;
return 1+max(getHeight(root->left),getHeight(root->right));
}

void print(struct Node* root, int level){ 
    if (root == NULL)  return; 
    if (level == 1) {printf("%d ", root->data); return;} 
    print(root->left, level-1); 
    print(root->right, level-1); 
}
  
void levelOrder( struct Node *root) 
{
    int h = getHeight(root); 
    for (int i=1; i<=h; i++) print(root, i); 
}

Node* insert(Node* root,int data){
    if(root==NULL)
        return newNode(data);
    else{
        Node* cur;
        if(data<=root->data){
            cur=insert(root->left,data);
            root->left=cur;                
        }
        else{
            cur=insert(root->right,data);
            root->right=cur;
        }
        
    }
    return root;
}
int main(){
    Node* root=NULL;
    int T,data;
    scanf("%d",&T);
    while(T-->0){
        scanf("%d",&data);
        root=insert(root,data);
    }
    levelOrder(root);
    return 0;
    
}