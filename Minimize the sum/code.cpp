class Solution {
public:
    int minimizeSum(int N, vector<int> arr) {
        // code here
        priority_queue<int, vector<int>, greater<int>> h;
        
        for(int i = 0; i < N; i++){
            h.push(arr[i]);
        }
        
        int ans = 0;
        while(h.size() > 1){
            int sum = h.top();
            h.pop();
            sum += h.top();
            h.pop();
            h.push(sum);
            ans += sum;
        }
        
        return ans;
        
    }
};
