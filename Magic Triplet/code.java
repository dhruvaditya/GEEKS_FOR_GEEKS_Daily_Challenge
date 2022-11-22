class Solution{
    public int countTriplets(int[] nums){
        // code here
        int count=0;
        int n=nums.length;
        if(n<=2){
            return 0;
        }
        for(int i=1; i<n-1; i++){
            int sm=0; int lr=0;
            for(int j=0; j<i; j++){
                if(nums[j]<nums[i]){
                    sm++;
                }
            }
            for(int k=i+1; k<n; k++){
                if(nums[k]>nums[i]){
                    lr++;
                }
            }
            count+=sm*lr;
        }
        return count;
        
    }
}
