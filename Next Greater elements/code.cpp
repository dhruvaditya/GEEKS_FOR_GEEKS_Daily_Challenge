class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){

        // Your code here

        vector<long long> ans(n);

        stack<long long> s;

        for(int i=n-1;i>=0;i--){

            if(s.empty()){

                ans[i] = -1;

            }else if(s.top()>arr[i]){

                ans[i] = s.top();

            }else{

                s.pop();

                i++;

                continue;

            }

            s.push(arr[i]);

        }

        return ans;

    }
};
