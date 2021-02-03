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
#include<queue>
void printLevelWise(BinaryTreeNode<int> *root) {
    // Write your code here
     if(root==nullptr)
    {
        return;
    }
    queue <BinaryTreeNode<int>*> Q1;
    queue <BinaryTreeNode<int>*> Q2;
    
    Q1.push(root);
    while(!Q1.empty())
    {
        if(Q1.front()->left!=nullptr)
        {
           Q2.push(Q1.front()->left); 
        }
        if(Q1.front()->right!=nullptr)
        {
           Q2.push(Q1.front()->right); 
        }
        cout<<Q1.front()->data<<" ";
    

        Q1.pop();
        if(Q1.empty())
        {
            cout<<endl;
        }
        
        if(Q1.empty()==true&&Q2.empty()==false)
        {
            while(!Q2.empty())
            {
                 if(Q2.front()->left!=nullptr)
                {
                Q1.push(Q2.front()->left); 
                 }
                if(Q2.front()->right!=nullptr)
                {
                    Q1.push(Q2.front()->right); 
                }
                cout<<Q2.front()->data<<" ";
                Q2.pop();
        if(Q2.empty())
        {
            cout<<endl;
        }

           }
        }
    }

}
