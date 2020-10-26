  TreeNode<int>* ans = root;
    int sum = root -> data;
    for(int i = 0; i < root -> children.size(); i++)
    {
        sum = sum + root -> children[i] -> data;
    }


     for(int i = 0; i < root -> children.size(); i++)
    {
        TreeNode<int> *x = maxSumNode(root -> children[i]);
         int xSum = x -> data;
        for(int i = 0; i < x ->children.size(); i++)
        {
            xSum = xSum + x ->children[i] -> data;
        }
         if(xSum > sum)
         {
             ans = x;
             sum = xSum;
         }
    }
    return ans;

}
