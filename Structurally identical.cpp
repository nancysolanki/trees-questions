bool isIdentical(TreeNode<int> *root1, TreeNode<int> * root2) 
{ if(root1==nullptr and root2==nullptr)
  {
    return true;
  }
  if((root1!=nullptr && root2==nullptr) || ( root2!=nullptr && root1==nullptr) )
  {  return false;}
 
  if(root1->data !=root2->data and root1->children.size()!=root2->children.size())
  {
      return false;
  }
         for (int i = 0,j=0; i < root1->children.size() and j<root2->children.size(); i++,j++) 
         {
           isIdentical(root1->children[i],root2->children[j]);
               
         }
 return true;
}
