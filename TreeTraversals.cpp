#include<iostream>
#include<stack>
using namespace std;

struct Node{
    int data;
    struct Node *left, *right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

void r_Preorder(struct Node *root){
    if(root == NULL)
        return;
    else{
        cout<<root->data<<" ";
        r_Preorder(root->left);
        r_Preorder(root->right);
    }
}

void r_Inorder(struct Node *root){
	if(root == NULL)
		return;
	else{
		r_Inorder(root->left);
		cout<<root->data<<" ";
		r_Inorder(root->right);
	}
}

void r_Postorder(struct Node *root){
    if(root == NULL)
        return;
    else{
        r_Postorder(root->left);
        r_Postorder(root->right);
        cout<<root->data<<" ";
    }
}

int main(){
    struct Node *root = new Node(10);
    root->left = new Node(-5);
    root->right = new Node(30);
    root->left->left = new Node(-10);
    root->left->right = new Node(0);
    root->left->right->right = new Node(5);
    root->right->right = new Node(36);

    r_Preorder(root);
}


