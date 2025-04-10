/*
Traversals in hierarchial data structures like trees,classified into 2 categories 
1.DFS:It starts from the root and explores as deeply as possible along each branch, visiting nodes until it reaches a leaf node. 
      It then backtracks to the most recent unexplored node and continues until all nodes are visited.
  - PreOrder , InOrder , PostOrder.
2.BFS:explores a binary tree level by level, visiting all nodes at a given level before processing to the next level.
  - LevelOrder traversal.
  
*/
//PREORDER TRAVERSAL is the type of Depth First Traversal where nodes are visited in the order: Root, Left then Right.
//It's named "preorder" because the "Visit" step occurs before traversing the left and right child nodes.
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
//PreOrder function
void PreOrder(Node *root,vector<int>&arr){
	if(root==NULL){
		return;
	}
	arr.push_back(root->data);
	PreOrder(root->left,arr);
	PreOrder(root->right,arr);
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
	PreOrder(root,arr);
	//Preorder array traversal
	for(int i=0;i<arr.size();i++){
         cout<<arr[i]<<" ";
	}
	return 0;
}

