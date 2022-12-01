  void rearrange(long long *arr, int n) { 
    	int st=0,end=n-1;
    	long long max=arr[n-1]+1;
    	for(int i=0;i<n;i+=2){
    	    int c=arr[end--]%max;
    	    arr[i]=arr[i]+c*max;
    	    c=arr[st++]%max;
    	    arr[i+1]=arr[i+1]+c*max;
    	}
    	
    	for(int i=0;i<n;i++)
    	arr[i]/=max;
    }
