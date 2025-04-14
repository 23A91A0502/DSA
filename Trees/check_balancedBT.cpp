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
//when the root comes to this function it returns -1 eiether or height
int heightOfBT(Node *root){
	if(root==NULL) {return 0;}

	int leftTree=heightOfBT(root->left);
	if(leftTree == -1) return -1;

	int rightTree=heightOfBT(root->right);
    if(rightTree == -1) return -1;

    if(abs(leftTree-rightTree) > 1) return -1;

	int height = max(leftTree,rightTree) + 1;
	return height;
}
//checking each and every node is balanced or not
bool is_balanced(Node *root){
      return heightOfBT(root)!=-1;
}
int main(){
	Node *root = new Node (1);
	root->left = new Node (2);
	root->right=new Node (3);
	root->left->left=new Node (4);
	root->left->right=new Node (5);
	root->right->left=new Node (6);
	root->right->right=new Node (7);
	
	bool res=is_balanced(root);

	if(res){
		cout<<"Binary tree is Balanced";
	}
	else{
		cout<<"Binary tree is Unbalanced";
	}
	
	return 0;
}
