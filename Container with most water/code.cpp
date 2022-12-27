long long maxArea(long long A[], int len)
{
    long long max_area = 0;
    // Two Pointer Approach
    int i = 0, j = len - 1;
    while(i<j){
        // Area of the container is the product of vertical length and horizontal length
        // Horizontal Length = Difference in X-Coordinates = j - i
        // Vertical Length = Minimum of the two Vertical lines because Water above that height flows away
        max_area = max(max_area, (j-i) * min(A[i], A[j]));
        // We need maximum area
        // Greedy Approach, try to maximize Vertical line height
        if(A[i] < A[j])
            i++;
        else
            j--;
    }
    return max_area;
}
