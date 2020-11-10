/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

void printNodesWithoutSibling(BinaryTreeNode<int> *root)
{
   if(root==nullptr)
   {
       return ;
   }
        if(root->left!=nullptr and root->right==nullptr)
    {
        cout<<root->left->data<<" ";
    }
    if(root->right!=nullptr and root->left==nullptr)
    {
        cout<<root->right->data<<" ";
    }
    printNodesWithoutSibling(root->left);
    printNodesWithoutSibling(root->right);
    return;
}
