class Solution{
public:
    int logab(int a, int b){return log2(a) / log2(b);}
    string baseEquiv(int n, int m){
        for (int i = 2; i <= 32; i++){if (logab(n, i) + 1 == m){return "Yes";}}
        return "No"; } };
