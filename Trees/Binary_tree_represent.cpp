/* NODE STRUCTURE :
binary tree node is represented using a struct or class that contains the following components:
Data Component: This holds the value of the node, which could be of any data type (e.g., integer, string, object).
Pointers to Children: Two pointers, left and right, pointing to the left and right child nodes, respectively. These pointers store the memory 
addresses of the child nodes, allowing navigation and access to further nodes in the tree. 
NODE CONSTRUCTOR:
The constructor function is named Node, which is the same as the structure name. It takes an integer val as a parameter, which represents the value to be stored in the node.
NODE CONNECTION:
when we are constructing a binary trees using pointers, each node stores memory addresses to its left and right children. 
these references form the connections between nodes;
*/
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
int main(){
	Node *root = new Node (1);
	root->left = new Node (2);
	root->right=new Node (3);
	root->left->right=new Node (5);
}
