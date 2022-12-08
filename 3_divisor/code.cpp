class Solution
{
public:
    bool isPrime(long long n){
        if (n <= 1)
            return false;
        if (n <= 3)
            return true;
        if (n % 2 == 0 || n % 3 == 0)
            return false;
        for (int i = 5; i * i <= n; i = i + 6)
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        return true;
    }
    
    int insane_fighter(long long n){
        long long temp = sqrt(n);
        int res=0;
        for(long long i=2;i<=temp;i++){
            long long pw = pow(i,2);
            if(pw%2==0 and i>2) continue;
            if(!isPrime(i))  continue;
            if(pw<=n)
                res++;
        }
        
        return res;
    }
    
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        vector<int> ans;
        for(int i=0;i<q;i++){
            int val = insane_fighter(query[i]);
            ans.push_back(val);
        }
        
        return ans;
    }
};
