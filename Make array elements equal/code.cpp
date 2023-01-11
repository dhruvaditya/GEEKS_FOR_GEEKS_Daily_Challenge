class Solution {
  public:
  
    long long int minIncrements(vector<int> arr, int N) {
        // Code here
        sort(arr.begin(),arr.end());
        int ans=0;
        int prev=arr[0];
        for(int i=1; i<N; i++){
            if(arr[i]>prev){
                prev=arr[i];
            }
            else
            {
                ans+=prev-arr[i]+1;
                prev++;
            }
        }
        return ans;
        
    }
};
