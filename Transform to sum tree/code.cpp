class Solution {
    private:
    void subSum (Node *root, int &sum){
        if(!root)
            return;
        
        subSum(root -> left, sum);
        sum += root -> data;
        subSum(root -> right, sum);
    }
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        // Your code here
         if(!node)
            return;
            
        int sum = -(node -> data);
        subSum(node, sum);
        node -> data = sum;
        toSumTree(node -> left);
        toSumTree(node -> right);
    }
};
