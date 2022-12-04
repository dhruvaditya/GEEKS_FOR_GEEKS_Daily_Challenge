string rearrange (string S, int N)
    {
        // ios_base::sync_with_stdio(false);cin.tie(NULL);
        map<char,int> v,c;
        int ct=0;
        string ans="",vo="",co="";
        for(int i=0; i<N;i++){
            if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u'){
                v[S[i]]++;
                ct++;
            }else{
                c[S[i]]++;
                ct--;
            }
        }
        if(ct<-1 || ct>1)return "-1";
        for(auto i : v){
            int x=i.second;
            while(x>0){
                vo+=i.first;
                x--;
            }
        }
        for(auto i : c){
            int x=i.second;
            while(x>0){
                co+=i.first;
                x--;
            }
        }
        int i=0;
        if(ct==0){
            if(co[0]>=vo[0]){
                while(i<vo.size()){
                    ans+=vo[i];
                    ans+=co[i];
                    i++;
                }
            }else{
                while(i<vo.size()){
                    ans+=co[i];
                    ans+=vo[i];
                    i++;
                }
            }
            
        }else if(ct==1){
            while(i<vo.size()){
                ans+=vo[i];
                if(i<co.size()) ans+=co[i];
                i++;
               }
            }else if(ct==-1){
                while(i<co.size()){
                    ans+=co[i];
                    if(i<vo.size())ans+=vo[i];
                    i++;
                }
            }
             return ans;
        }
