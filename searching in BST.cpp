bool searchInBST(BinaryTreeNode<int> *root , int k) 
{
	if(root==nullptr)
    {
        return false;
        
    }
    if(root->data==k)
    {
        return true;
    }
    if(k<root->data)
    {
        searchInBST(root->left,k);
    }
      if(k>root->data)
    {
        searchInBST(root->right,k);
    }
}
