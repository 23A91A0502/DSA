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
vector<int> PreOrder(Node *root){
	vector<int> ans;
	if(root==NULL) {return ans;}
	stack<Node *>s;
	s.push(root);
	while(!s.empty()){
	root=s.top();
	s.pop();
	ans.push_back(root->data);
	
	if(root->right!=NULL){
	s.push(root->right);
    }
    if(root->left!=NULL){
	s.push(root->left);
    }
}
return ans;
}
int main(){
	Node *root = new Node (1);
	root->left = new Node (2);
	root->right=new Node (3);
	root->left->left=new Node (4);
	root->left->right=new Node (5);
	root->right->left=new Node (6);
	root->right->right=new Node (7);
	
	vector<int> arr = PreOrder(root);
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
