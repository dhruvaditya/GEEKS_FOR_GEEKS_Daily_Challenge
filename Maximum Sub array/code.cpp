class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    vector<int>ans;

     ans.push_back(-1);

     vector<int>tans;

     int sum=0;

     int tmp=0;

     for(int i=0;i<n;i++)

     {

         if(a[i]<0)

         {

             if(sum<tmp)

             {

                 ans.resize(0);

                 for(auto x: tans)

                     ans.push_back(x);

                 tans.resize(0);

             }

             sum=max(tmp,sum);

             tmp=0;

             tans.resize(0);

         }

         else

         {

             tans.push_back(a[i]);

             tmp+=a[i];

         }

     }

     

     if(sum<tmp)

     {

        ans.resize(0);

           for(auto x: tans)

            ans.push_back(x);

        }

     

     return ans;
	}
};
