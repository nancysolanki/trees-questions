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

BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int> *root)
{
   if(root==nullptr)
       return nullptr;

    if(root->left==nullptr and root->right==nullptr)
    {
        delete root;
        return nullptr;
    }

  root->left=  removeLeafNodes(root->left);
   root->right =removeLeafNodes(root->right);
    return root;
}
