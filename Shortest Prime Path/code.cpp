class Solution
{
   int[] prime = new int[10000];
    Solution()
    {
        Arrays.fill(prime,1);
        for(int i = 2;i*i<10000;i++){
            if(prime[i]==1){
                for(int j = i*i;j<10000;j+=i){
                    prime[j] = 0;
                }
            }
        }
    }
    
    public int shortestPath(int Num1,int Num2){
        
        Queue<Integer> q = new ArrayDeque<>();
        HashSet<Integer> st = new HashSet<>();
        
        q.offer(Num1);
        st.add(Num1);
        
        int cnt = 0;
        
        while(!q.isEmpty()){
            int n = q.size();
            while(n-- >0){
                int x = q.poll();
                if(x==Num2) return cnt;
                char[] s = (""+x).toCharArray();
                
                for(int i = 0;i<4;i++){
                    
                    char c = s[i];
                    for(int j = 0;j<=9;j++){
                        if(i==0 && j==0) continue;
                        s[i] = (char)(j+'0');
                        int newVal = Integer.parseInt(new String(s));
                        if(prime[newVal]==1 && !st.contains(newVal)){
                            st.add(newVal);
                            q.add(newVal);
                        }
                    }
                    s[i] = c;
                }
            }
            cnt++;
        }
        return -1;
    }
}
