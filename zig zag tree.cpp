
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
void zigZagOrder(BinaryTreeNode<int> *root)
{
     stack<BinaryTreeNode<int>*> s1;
      stack<BinaryTreeNode<int>*> s2;
    s1.push(root);
while(s1.empty()==false or s2.empty()==false) 
{   while(!s1.empty())
   {
       BinaryTreeNode<int> *curr=s1.top();
       s1.pop();
       cout<<curr->data<<" ";
          if(curr->left!=nullptr)
          {
              s2.push(curr->left);
              
          } 
       if(curr->right!=nullptr)
          {
              s2.push(curr->right);
              
          }
   }
    if(s1.empty())
    {
        cout<<endl;
    }
 while(!s2.empty())
 {  
     BinaryTreeNode<int> *curr2=s2.top();
     s2.pop();
     cout<<curr2->data<<" ";
      if(curr2->right!=nullptr)
    {
      s1.push(curr2->right);
              
      } 
    if(curr2->left!=nullptr)
     {
        s1.push(curr2->left);
              
      }
     
     
   
  }
    if(s2.empty())
    {
        cout<<endl;
    }
 
}
return;
}
