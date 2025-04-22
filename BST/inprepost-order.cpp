#include<iostream>
using namespace std;
struct Node
{
   int data;
   Node* left;
   Node* right;

   Node(int x)
   {
    data=x;
    left=right=NULL;
   }
};
void inorder(Node* root)
{
    if(root==NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(Node* root)
{
    if(root==NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root)
{
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
Node* insert(Node* root,int val)
{
    if(root == NULL) return new Node(val);
    if(val < root->data) 
    root->left= insert(root->left,val);
    else
    root->right=insert(root->right,val);
    return root;
}
int main()
{
    Node* root=NULL;
    root=insert(root,50);
    insert(root,30);
    insert(root,70);
    insert(root,20);
    insert(root,45);
    insert(root,60);
    insert(root,5);
    insert(root,10);
    insert(root,15);
    insert(root,24);
    insert(root,25);
    insert(root,55);
    insert(root,35);
    insert(root,59);
    insert(root,80);
    insert(root,85);
    insert(root,90);
    insert(root,100);
    
    cout << "\nInorder Traversal= ";
    inorder(root);
    cout << "\nPreorder traversal= ";
    preorder(root);
    cout << "\nPostorder traversal= ";
    postorder(root);
    return 0;
}
