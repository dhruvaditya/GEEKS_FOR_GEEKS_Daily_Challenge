long long merge(long long arr[],long long temp[], 
                    long long int left,long long int mid,long long int right){
        long long int i,j,k;
        long long int count=0;
        
        i=left;
        j=mid;
        k=left;
        
        while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
            count = count + (mid - i);
        }
    }
        while (i <= mid - 1)
            temp[k++] = arr[i++];
        while (j <= right)
            temp[k++] = arr[j++];
     
        for (i = left; i <= right; i++)
            arr[i] = temp[i];
            
        return count;
    }
    
    long long int mergeSort(long long arr[],long long temp[], 
                            long long left,long long  right ){
        long long int mid,count=0;
        if(right >left){
            int mid=left+(right-left)/2;
            
            count+=mergeSort(arr,temp,left,mid);
            count+=mergeSort(arr,temp,mid+1,right);
            
            count+=merge(arr,temp,left,mid+1,right);
        }
        return count;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        long long temp[N];
        return mergeSort(arr,temp,0,N-1);
    }
