int maximumPoints(int n, vector<vector<int>> &grid)
{
    // create a variable sum to store the sum of the diagonal elements
    int sum = 0;
  // iterate through the given 2d array and add all the diagonal elements
    for(int i = 0; i < n; i++){
        sum += grid[i][i];
        sum += grid[i][n-i-1];
    }
  // if number of elements is not even delete n/2th element from the sum    
    if(n % 2 == 1)
        sum -= grid[n/2][n/2];
    return sum;
}
