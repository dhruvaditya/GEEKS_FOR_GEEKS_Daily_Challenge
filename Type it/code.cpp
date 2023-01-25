class Solution {
  public:
    int minOperation(string s) {
        // code here
        int n=s.size(),dup=0;
        string temp="";
        for(int i=0;i<n;i++){
            temp+=s[i];
            if((i+temp.size()) < n && temp == s.substr(i+1,temp.size())){
                int t=temp.size();
                dup=max(t,dup);
            }
        }
        int ans = n-dup+1;
        if(dup>0)
            return ans;
        return n;
    }
};
