// Following is the Binary Tree node structure
/**************
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

***************/
#include<stack>
#include<queue>
void zigZagOrder(BinaryTreeNode<int> *root) {
    // Write your code here
       if(root==nullptr)
    {
        return;
    }
    stack <BinaryTreeNode<int>*> Q1;
    stack <BinaryTreeNode<int>*> Q2;
    
    
    Q1.push(root);
    while(!Q1.empty())
    {
        if(Q1.top()->left!=nullptr)
        {
           Q2.push(Q1.top()->left); 
        }
        if(Q1.top()->right!=nullptr)
        {
           Q2.push(Q1.top()->right); 
        }
        cout<<Q1.top()->data<<" ";
    

        Q1.pop();
        if(Q1.empty())
        {
            cout<<endl;
        }
        
        if(Q1.empty()==true&&Q2.empty()==false)
        {
            
            while(!Q2.empty())
            {
                  if(Q2.top()->right!=nullptr)
                {
                    Q1.push(Q2.top()->right); 
                }
                 if(Q2.top()->left!=nullptr)
                {
                Q1.push(Q2.top()->left); 
                 }
              
                cout<<Q2.top()->data<<" ";
                Q2.pop();
        if(Q2.empty())
        {
            cout<<endl;
        }

           }
        }
    }


}
