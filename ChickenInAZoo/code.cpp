class Solution {
public:
    long long int NoOfChicks(int n){
    long dp[n];
    memset(dp,0,sizeof dp);
    dp[0]=1;
    for(int i=1; i<n; i++){
        for(int j=1; j<=5; j++){
            if(i-j>=0){
                dp[i]+=dp[i-j]*2;
            }
        }
    }
    long res=0;
    for(int i=max(0,n-6);i<n; i++){
        res+=dp[i];
        
	}
	return res;
    }
    
};
