class Solution
{
  public:
  int maxWeightCell(int N, vector<int> edge)
  {
      // code here
       if(N==1 && edge[0]==-1)

        return 0;

      unordered_map<int,int> mp;

      for(int i=0;i<N;i++)

      {

         if(mp.find(edge[i])==mp.end())

            mp[edge[i]]=i;

        else

            mp[edge[i]]+=i;

      }

      int mx=INT_MIN;

      int pos=0;

      for(auto it:mp)

      {

         if(mx<it.second){

            mx=it.second;

            pos=it.first;

         }

         else if(mx==it.second)

         {

             pos=max(pos,it.first);

         }

      }

      return pos;
  }
};
