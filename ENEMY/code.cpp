
class Solution
{
    public:
        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            //  code here
            vector<int>row,col;
            row.push_back(-1);
            col.push_back(-1);
            int mxr=0,mxc=0;
            for(auto &a:enemy){
                row.push_back(a[0]-1);
                col.push_back(a[1]-1);
            }
            row.push_back(n);
            col.push_back(m);
            sort(row.begin(),row.end());
            sort(col.begin(),col.end());
            for(int i=1;i<row.size();i++){
                mxr=max(mxr,row[i]-row[i-1]-1);
            }for(int i=1;i<row.size();i++){
                mxc=max(mxc,col[i]-col[i-1]-1);
            }
            return mxc*mxr;
        }
};
