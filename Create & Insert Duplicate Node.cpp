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

void insertDuplicateNode(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==nullptr)
    {
        return;
    }
    BinaryTreeNode<int>* copy= new BinaryTreeNode<int>(root->data);
    BinaryTreeNode<int>*temp=root->left;
    root->left=copy;
    copy->left=temp;
    insertDuplicateNode(copy->left);
    insertDuplicateNode(root->right);
    return;
    
}
