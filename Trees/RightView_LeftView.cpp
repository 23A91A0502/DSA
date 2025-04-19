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
void rightView(Node *root,int level,vector<int>&rv){
	    
        if(root==NULL){
        	return;
        }
        if(level==rv.size()){rv.push_back(root->data);}
        rightView(root->right,level+1,rv);
        rightView(root->left,level+1,rv);
        
}
void leftView(Node *root, int level,vector<int>&lv){
	if(root==NULL){return;}
	if(level==lv.size()){lv.push_back(root->data);}
	leftView(root->left,level+1,lv);
	leftView(root->right,level+1,lv);
}
int main(){
	Node *root = new Node (1);
	root->left = new Node (2);
	root->right=new Node (3);
	root->left->left=new Node (4);
	root->left->right=new Node (5);
	root->right->left=new Node (6);
	root->right->right=new Node (7);
	vector<int>rv;
	int level=0;
	rightView(root,level,rv);
	cout<<"The right view of the given Binary Tree: "<<endl;
	for(int i=0;i<rv.size();i++){
		cout<<rv[i]<<" ";
	}
	cout<<endl;
	vector<int>lv;
	level=0;
	leftView(root,level,lv);
	cout<<"The left view of the given Binary Tree: "<<endl;
	for(int i=0;i<lv.size();i++){
		cout<<lv[i]<<" ";
	}

	
	return 0;
}
