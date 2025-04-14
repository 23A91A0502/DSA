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
void PostOrder_Stacks2(Node *root){
	stack<Node *>st1;
	stack<int>st2;
	st1.push(root);
	while(!st1.empty()){
         root=st1.top();
         st1.pop();
         st2.push(root->data);
         if(root->left!=NULL){
         	st1.push(root->left);
         }
         if(root->right!=NULL){
         	st1.push(root->right);
         }
	}
	while(!st2.empty()){
		cout<<st2.top()<<" ";
		st2.pop();
	}
}
int main(){
	Node *root = new Node (1);
	root->left = new Node (2);
	root->right=new Node (3);
	root->left->left=new Node (4);
	root->left->right=new Node (5);
	root->right->left=new Node (6);
	root->right->right=new Node (7);
	
	PostOrder_Stacks2(root);
	
	return 0;
}
                                
