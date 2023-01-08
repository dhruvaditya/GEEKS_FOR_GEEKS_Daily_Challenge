class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        // code here
        long long int p=0;
       map<int,int>mp;
       for(int i=0; i<n; i++){
           mp[arr[i]%k]++;
       }
       
       for(auto it:mp){
            p+=(it.second*(it.second-1))/2;
            
       }
       return p;
    }
    
};
