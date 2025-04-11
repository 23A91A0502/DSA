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
vector<vector<int>> LevelOrder(Node *root){
	vector<vector<int>> res;
	if(root==NULL){return res;}
	queue<Node *>q;
	q.push(root);
	while(!q.empty()){
		int size=q.size();
		vector<int>level;
		
		for(int i=0;i<size;i++){
			Node * nde=q.front();
		    q.pop();
			if(nde->left!=NULL){
				q.push(nde->left);
			}
			if(nde->right!=NULL){
				q.push(nde->right);
			}
             level.push_back(nde->data);
		}
		res.push_back(level);
	}
	
	return res;
}
int main(){
	Node *root = new Node (1);
	root->left = new Node (2);
	root->right=new Node (3);
	root->left->left=new Node (4);
	root->left->right=new Node (5);
	root->right->left=new Node (6);
	root->right->right=new Node (7);
	
	vector<vector<int>> arr = LevelOrder(root);
	//Levelorder array traversal
	for(int i=0;i<arr.size();i++){
		for(int j=0;j<arr[i].size();j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
                                
