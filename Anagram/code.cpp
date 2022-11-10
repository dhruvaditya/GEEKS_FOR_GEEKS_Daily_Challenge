class Solution
{
    public:
    int i;
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        
        // Your code here
        int n1=a.size();
        int n2=b.size();
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(n1!=n2){
            return false;
        }
        for(int i=0; i<n1; i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
        
    }

};
