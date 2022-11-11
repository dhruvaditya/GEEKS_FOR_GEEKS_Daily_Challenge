//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:

  // Checking if a number is prime or not 
    bool isPrime(int x) { 
        // check for numbers from 2 to sqrt(x) 
        // if it is divisible return false 
        for (int i=2; i*i<=x; i++) 
            if (x%i == 0) 
                return false; 
    return true; 
    } 
  
  
    // Function to check if a prime number 
    // can be expressed as sum of 
    // two Prime Numbers 
    bool isPossible(int N) { 
        
         if(N<4)return false;
        // if N is even directly return true; 
            if (N%2 == 0) 
                return true; 
      
            // If N is odd, then one prime must 
            // be 2. All other primes are odd 
            // and cannot have a pair sum as even. 
            return isPrime(N - 2);  
    }
    
    string isSumOfTwo(int N) {
        
        if(isPossible(N))return "Yes";
        else return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends
