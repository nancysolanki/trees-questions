/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/
#include <bits/stdc++.h>
using namespace std;
void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) 
{
	if(root==nullptr)
    {
        return;
    }
    if(root->data>=k1)
    {
         elementsInRangeK1K2(root->left,k1,k2);
    }
   if(root->data<=k2 and root->data>=k1)
   {
       cout<<root->data<<" ";
      
   }
    if(root->data<=k2)
      elementsInRangeK1K2(root->right,k1,k2);
}
