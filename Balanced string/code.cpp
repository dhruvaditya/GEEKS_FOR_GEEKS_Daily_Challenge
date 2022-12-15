   class Solution {
    private :
        const string ALPHABETS = "abcdefghijklmnopqrstuvwxyz";
        int sum_of_digits(int n) {
            int sum = 0;
            while(n) {
                sum += n % 10;
                n /= 10;
            }
            return sum;
        }
  public:
    string BalancedString(int N) {
        string res;
        res.reserve(N);
        
        int sod = sum_of_digits(N);
        int complete_count = N / 26;
        N %= 26;
        
        while(complete_count-->0) {
            res += ALPHABETS;
        }
        
        int count = (N >> 1) + (N & 1) * (1 - (sod & 1));
        
        res += ALPHABETS.substr(0, count);
        res += ALPHABETS.substr(26 - N + count, count + 1);
        
        return res;
    }
};
