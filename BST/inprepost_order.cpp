#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* createfirst(int val)
{
    Node* newNode = new Node;
    newNode->data=val;
    newNode->left= newNode->right=NULL;
    return newNode;
}
Node* insert(Node* root,int val)
{
    if(root == NULL)
    return createfirst(val);
    if(val < root->data)
    root->left =insert(root->left,val);
    else 
    root->right =insert(root->right,val);
    return root;
}
void inorder(Node* root)
{
    if(root == NULL)return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(Node* root)
{
    if(root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root)
{
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
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
    

    cout << "\nInorder Traversal= ";
    inorder(root);
    cout << "\nPreorder traversal= ";
    preorder(root);
    cout << "\nPostorder traversal= ";
    postorder(root);
    return 0;
}
