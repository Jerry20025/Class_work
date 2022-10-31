#include <iostream>

using namespace std;
class node{
    public:
        int data ; 
        node *left ; 
        node *right; 
        
        node(int d){
            this->data=d; 
            this->left=this->right=NULL; 
        }
}; 
node* buildtree(node* root){
        int data; 
        cin>>data; 
        root=new node(data); 
        while(data==-1){
            return NULL; 
        }
        root->left=buildtree(root->left); 
        root->right =buildtree(root->right); 
        return root;
}
void printInorder(node* root){
    if(root==NULL){
        return; 
    }
    printInorder(root->left);
    cout<<root->data; 
    printInorder(root->right);
}
void printPostorder(node* root){
    if(root==NULL){
        return; 
    }
    printInorder(root->left);
    printInorder(root->right);
    cout<<root->data;
}

int main()
{
    node* root=NULL; 
    root=buildtree(root);
    cout<<"Printing Inorder\n";
    printInorder(root);

    return 0;
}
