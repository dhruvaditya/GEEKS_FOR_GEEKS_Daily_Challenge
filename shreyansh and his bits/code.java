long count(long n)
    {
        // Code Here
        ArrayList<Integer> list = new ArrayList<>();
        int ct=0;
        while(n>0) {
            if(n%2==0) {
                list.add(0);
            } else {
                ct++;
                list.add(1);
            }
            n/=2;
        }
        
        int[] a = new int[list.size()];
        for(int i=0,j=a.length-1;i<list.size();i++,j--) {
            a[i] = list.get(j);
        }
        
        return f(a,0,ct,0,new Long[a.length][ct+1][2])-1;
    }
    
    public static long f(int[] num,int idx,int ct,int turn,Long[][][] dp) {
        if(idx>=num.length) {
            if(ct!=0) return 0;
            return 1;
        }
        if(ct==0) {
            return 1;
        }
        if(dp[idx][ct][turn]!=null) return dp[idx][ct][turn];
        long ans;
        if(num[idx]==1) {
            ans = f(num,idx+1,ct-1,turn,dp)+f(num,idx+1,ct,1,dp);
        } else {
            if(turn==0) {
                ans = f(num,idx+1,ct,turn,dp);
            } else {
                ans = f(num,idx+1,ct-1,1,dp)+f(num,idx+1,ct,1,dp);
            }
        }
        
        return dp[idx][ct][turn]=ans;
    }
