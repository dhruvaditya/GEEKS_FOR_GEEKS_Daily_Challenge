class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        vector<char>low;
        vector<char>high;
        for(char c:str)
        {
            if(c>='a' && c<='z')
                low.push_back(c);
            else
                high.push_back(c);
        }
        sort(low.begin(),low.end());
        sort(high.begin(),high.end());
        int j=0,k=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]>='a' && str[i]<='z')
                str[i]=low[j++];
            else
                str[i]=high[k++];
        }
        return str;
    }
};
