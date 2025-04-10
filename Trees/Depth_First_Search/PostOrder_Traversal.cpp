// POSTORDER TRAVERSAL is the type of Depth First Traversal where nodes are visited in the order: Left, Right then Root.

//It's named "postorder" because the "Visit" step occurs after traversing the left and right child nodes.
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
void PostOrder(Node *root,vector<int>&arr){
	if(root==NULL){
		return;
	}
	PostOrder(root->left,arr);
	PostOrder(root->right,arr);
  arr.push_back(root->data);
}
int main(){
	Node *root = new Node (1);
	root->left = new Node (2);
	root->right=new Node (3);
	root->left->left=new Node (4);
	root->left->right=new Node (5);
	root->right->left=new Node (6);
	root->right->right=new Node (7);
	vector<int>arr;
	PostOrder(root,arr);
	//Preorder array traversal
	for(int i=0;i<arr.size();i++){
         cout<<arr[i]<<" ";
	}
	return 0;
}
