int cnt=0;
        while(N!=0){
            int rmsb=N &-N;
            N-=rmsb;
            cnt++;
        }
        return cnt;
