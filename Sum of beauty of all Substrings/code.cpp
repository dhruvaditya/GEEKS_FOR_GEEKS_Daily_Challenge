class Solution {
    int func(vector<int> &s){
        int minVal = INT_MAX, maxVal = INT_MIN;
        for(auto it : s){
            if(it > 0) {
                minVal = min(minVal, it);
                maxVal = max(maxVal, it);
            }
        }
        return maxVal - minVal;
    }
  public:
    int beautySum(string s) {
        int ans = 0;
        for(int i = 0; i < s.length(); i++){
            vector<int> alp(26, 0);
            for(int j = i; j < s.length(); j++){
                alp[s[j] - 'a']++;
                ans += func(alp);
            }
        }
        return ans;
    }
};
