int lcaInBST(BinaryTreeNode<int>* root , int val1 , int val2){
    // Write your code here
if(root==nullptr)
    return -1;
  if(root->data == val1 || root->data==val2)
    return root->data;
  int a = lcaInBST(root->left,val1,val2);
  int b = lcaInBST(root->right,val1,val2);
  
  if(a != -1 && b == -1 )
    return a;
  if(b != -1 && a == -1 )
    return b;
  if(b == -1 && a == -1 )
  return -1;
  if(b != -1 && a != -1 )
  return root->data;

  
}
