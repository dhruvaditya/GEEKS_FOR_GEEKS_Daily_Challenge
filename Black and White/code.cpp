long long numOfWays(int N, int M)

{

    int mod = 1e9+7;

    long long ans=((long long)N*M-1)*N*M%mod;

    if(N>1 && M>2) ans=(ans-4*((long long)N-1)*(M-2)%mod)%mod;

    if(M>1 && N>2) ans=(ans-4*((long long)M-1)*(N-2)%mod)%mod;

    return ans;

}
