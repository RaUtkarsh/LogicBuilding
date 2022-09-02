void moveZerosToLeft(int *arr, int n) 
{
    //take two pointers and point the last element of the array
    int i = n-1, j = n-1;
  //keep iterating until i and j are both >= 0
    while(i >= 0 && j >= 0){
      //if ith element is not 0 swap i and j elements
        if(arr[i] != 0)
            swap(arr[i--], arr[j--]);
      //if ith element is 0 then decreament only i 
        else
            i--;
    }
}
