class Solution{
public:
    vector<int> minPartition(int n)
    {
        // code here
        int a[]={1,2,5,10,20,50,100,200,500,2000}; 
        int i = 9;
        vector<int> v; 
        //int i=0;
        while(n>0){
            if(n>=a[i]){
                n=n-a[i];
                v.push_back(a[i]); 
            }
            else {
                i--;
            }
        }
        return v;
        
    }
};
