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
vector<int> InOrder(Node *root){
	vector<int> ans;
	stack<Node *>s;
	Node * node=root;
	while(true){
		if(node != NULL){
			s.push(node);
			node=node->left;
		}
		else{
			if(s.empty()) break;
			node = s.top();
			s.pop();
			ans.push_back(node->data);
			node=node->right;
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
	
	vector<int> arr = InOrder(root);
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
                                
