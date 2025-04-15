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
//to take diam=0 and updates the maximum diameter of every node in the tree.
int heightOfBT(Node *root,int &diameter){
	if(root==NULL) {return 0;}
    
	int lh=heightOfBT(root->left,diameter);
	int rh=heightOfBT(root->right,diameter);
    diameter=max(diameter,(lh+rh));
    return 1 + max(lh,rh);
}
//calls the height function to update the diameter and returns the diameter
int Diameter(Node *root){
     int diameter=0;
     heightOfBT(root,diameter);
     return diameter;
}
int main(){
	Node *root = new Node (1);
	root->left = new Node (2);
	root->right=new Node (3);
	root->left->left=new Node (4);
	root->left->right=new Node (5);
	root->right->left=new Node (6);
	root->right->right=new Node (7);
	
	
	int res=Diameter(root);
	cout<<res;
	return 0;
}
