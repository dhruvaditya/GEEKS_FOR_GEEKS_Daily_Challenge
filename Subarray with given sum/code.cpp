vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        if(s==0) return {-1};
        int i=0, j=0;
        long long sum = 0;
        while(i < n && j <= n) {
            if(sum < s) {
                sum += arr[j];
                j++;
            }
            else if(sum > s) {
                sum -= arr[i];
                i++;
            }
            else {
                return {i+1,j};
            }
        }
        return {-1};
    }
