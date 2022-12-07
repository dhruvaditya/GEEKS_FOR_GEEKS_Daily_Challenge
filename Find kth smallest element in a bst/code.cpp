class Solution {

  public:

    // Return the Kth smallest element in the given BST

    int ans = -1;

    void solve(Node* root, int &K){

        if(root == NULL) return;

        solve(root->left,K);

        K--;

        if(K == 0){

            ans = root->data;

            return;

        }

        solve(root->right,K);

        

    }

    int KthSmallestElement(Node *root, int K) {

        // add code here.

        ans = -1;

        solve(root,K);

        return ans;

    }

};
