//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long int numberOfSquares(long long int base)
    {
       long long int sum=0;
        //code here
        if(base%2==0){
            long long int side=base-2;
            long long int n=side/2;
            sum=(n*(n+1))/2;
            
        }
        else 
        {
            long long int side=base-3;
            long long int n=side/2;
            sum=(n*(n+1))/2;
        }
        return sum;
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		long long int base;
		cin >> base;

        Solution ob;
		cout << ob.numberOfSquares(base) << "\n";

	}

	return 0;
}

// } Driver Code Ends
