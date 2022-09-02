int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int start = 0, end = n-1;
    
    while(start <= end){
        int mid = start + (end - start)/2;
        
        if(val == input[mid]) return mid;
        
        if(val < input[mid]){
            end = mid-1;
        }
        
        if(val > input[mid]) start = mid + 1;
    }
    return -1;
}
