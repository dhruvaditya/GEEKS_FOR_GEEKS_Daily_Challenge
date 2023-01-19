class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        //code here
          int k = 0;

        int j = 0;

        int a = A,b=B,c=C,d=D;

        while(C<A){

            k++;

            A=A/2;

        }

         while(D<B){

            k++;

            B=B/2;

        }

      

        while(C<b){

            j++;

            b=b/2;

        }

        

         while(D<a){

            j++;

            a=a/2;

        }

        int ans = min(k,j);

        return ans;
    }
};
