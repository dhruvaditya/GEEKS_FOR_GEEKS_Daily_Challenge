int minn = INT_MIN;

int ans = 0;

void solve(Node* root)

{

    if(root==NULL)return ;

    solve(root->left);

    if((root->left!=NULL) && (root->right!=NULL))

    {

        if(__gcd(root->left->data,root->right->data)>minn)

        {

            ans = root->data;

            minn = __gcd(root->left->data,root->right->data);

        }

    }

    solve(root->right);

}

    int maxGCD( Node* root)

    {

        if(root==NULL)return -1;

        solve(root);

        return ans;

    }
