#include<bits/stdc++.h>
using namespace std;
struct Node{
        int data;
        struct Node *left;
        struct Node *right;
        Node(int val){
        	data=val;
        	left=right=NULL;
        }
};
int heightOfBT(Node *root){
	if(root==NULL) {return 0;}

	int leftTree=heightOfBT(root->left);
	int rightTree=heightOfBT(root->right);
	
	int height = 1 + max(leftTree,rightTree);
	return height;
}
int main(){
	Node *root = new Node (1);
	root->left = new Node (2);
	root->right=new Node (3);
	root->left->left=new Node (4);
	root->left->right=new Node (5);
	root->right->left=new Node (6);
	root->right->right=new Node (7);
	
	int height=heightOfBT(root);
	cout<<height;
	
	return 0;
}
