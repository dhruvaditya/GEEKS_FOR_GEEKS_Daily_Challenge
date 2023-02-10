//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        int b=0,a=0,l=0,o=0,n=0;
        for(int i=0; i<s.size(); i++){
		if(s[i]=='b'){
			b+=1;
		}
		if(s[i]=='a'){
			a+=1;
		}
		if(s[i]=='l'){
			l+=1;
		}
		if(s[i]=='o'){
			o+=1;
		}
		if(s[i]=='n'){
			n+=1;
		}

	}
	int p=min(b,a);
	int r=min(p,n);
	int r2=min(l,o);
	int r3=r2/2;
	int r4=min(r,r3);
	return r4;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends
