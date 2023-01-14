class GfG
{
    int maxLen(int arr[], int n)

    {

        HashMap<Integer,Integer> map=new HashMap<>();

        int sum=0;

        int ans=0;

        map.put(0,-1);

        for(int i=0;i<n;i++){

            sum+=arr[i];

            

            if(map.containsKey(sum)==true){

                ans=Math.max(ans,i-map.get(sum));

            }

            

            map.putIfAbsent(sum, i);

            

        }

        return ans;

    }
}
