class Solution {

  public:

    int minVal(int a, int b) {

        // code here

        int ans=a;

        int ct_set=__builtin_popcount(b);

        int i=0;

        while(__builtin_popcount(ans)!=ct_set){

            // we have to find x such that they are closest so that their XOR can be minimum 

            // closer the number minimum the XOR

            // we have count of set bits in C

            // if count of set bits in a is greater than that in C then we have to reduce it

            //  this can be done by the below steps.

            if(__builtin_popcount(ans)>ct_set)ans&=(~(1<<i));

            // else increase the set bits count in ans

            else

            ans|=1<<i;

            i++;

        }

        // finally return ans

        

        return ans;

    }

};
