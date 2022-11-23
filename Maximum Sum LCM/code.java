class Solution {
    static long maxSumLCM(int n) {
        // code here
        if(n==1){
            return 1;
        }
        long sum=0;
        for(int i=1; i*i<=n; i++){
            if(n%i==0){
                if(n/i==i){
                    sum+=i;
                }
                else{
                sum+=i;
                sum+=n/i;
                }
            }
        }
        return sum;
    }
}
