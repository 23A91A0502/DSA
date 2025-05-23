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
vector<int> preInPostTraversal(Node * root){
	vector<int> pre,in,post;
	stack<pair<Node *,int>>st;
	st.push({root,1});
	// if(root==NULL) {return;}
	while(!st.empty()){
		auto it=st.top();
		st.pop();
		if(it.second == 1){
			pre.push_back(it.first->data);
			it.second++;
			st.push(it);
			if(it.first->left!=NULL){
				st.push({it.first->left,1});
			}
		}
		else if(it.second==2){
			in.push_back(it.first->data);
			it.second++;
			st.push(it);
			if(it.first->right!=NULL){
				st.push({it.first->right,1});
			}
		}
		else{
			post.push_back({it.first->data});
		}
	}
	return post;
	//return pre;
	//freturn in;
}
int main(){
	Node *root = new Node (1);
	root->left = new Node (2);
	root->right=new Node (3);
	root->left->left=new Node (4);
	root->left->right=new Node (5);
	root->right->left=new Node (6);
	root->right->right=new Node (7);
	
	vector<int> res = preInPostTraversal(root);
	for(auto numm:res){
		cout<<numm<<" ";
	}
	
	return 0;
}
