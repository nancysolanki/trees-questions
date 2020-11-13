int getLCA(BinaryTreeNode <int>* root , int a, int b) 
{
    if(root==nullptr)
    {
        return-1;
        
    }
    if(a==root->data or b==root->data)
    {
        return root->data;
    }
    int x=getLCA(root->left,a,b);
     int y=getLCA(root->right,a,b);
    if(x==-1 and y!=-1)
    {
        return y;
    }
       if(x!=-1 and y==-1)
    {
        return x;
    }
    if(x!=-1 and y!=-1)
    {
       return root->data;
    }
}
