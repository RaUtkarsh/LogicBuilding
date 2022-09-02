int occursOnce(vector<int> &a, int n){
	// create a variable to store the output
	int ans = 0;
    for(int i = 0; i < n; i++){
      //use xor operator, it gives 0 when values are repeated and returns the number when not.
        ans = ans^a[i];
    }
    return ans;
    
}
