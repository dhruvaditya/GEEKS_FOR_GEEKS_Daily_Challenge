bool makePalindrome(int n,vector<string> &arr){
        unordered_map<string,int> mp;
        int count=0;
        for(int i=0;i<n;i++){
            string s=arr[i];
            reverse(arr[i].begin(),arr[i].end());
            if(mp.find(arr[i])!=mp.end())
                mp[arr[i]]--;
            else
                mp[s]++;
        }
        for(auto x:mp){
            string t="";
            if(x.second%2!=0){
                t=x.first;
            if(!equal(t.begin(), t.begin() + t.size()/2, t.rbegin()))
                return false;
                 count++;
            }
        }
        if(count%2==0 && count!=0)return false;
        return true;
    }
//https://practice.geeksforgeeks.org/problems/8d0e8785cef59cf4903b926ceb7100bcd16a9835/1
