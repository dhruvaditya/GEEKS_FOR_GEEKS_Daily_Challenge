class Solution {
  public:
    int isItPossible(string S, string T, int M, int N) {
        // code here
        vector<pair<char,int>>v1,v2;
        for(int i=0; i<M; i++){
            if(S[i]!='#'){
                v1.push_back({S[i],i});
            }
            if(T[i]!='#'){
                v2.push_back({T[i],i});
            }
        }
        if(v1.size()!=v2.size()){
            return 0;
        }
        for(int i=0; i<v1.size(); i++){
          if(v1[i].first!=v2[i].first){
              return 0;
          }
          else{
              if(v1[i].first=='A'){
                  if(v1[i].second<v2[i].second){
                      return 0;
                  }
                
              }
              else{
                    if(v1[i].second>v2[i].second){
                        return 0;
                    }
                }
              
          }
          
        }
        return 1;
  
    }
};
