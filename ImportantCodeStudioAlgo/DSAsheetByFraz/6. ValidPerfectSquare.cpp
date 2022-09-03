bool isPerfectSquare(long long n) {
	// use classic two pointer approach
    long long l = 1, h = n;
    while(l <= h){
      //calculate mid and then calculate the square of the same
        long long mid = l + (h - l) / 2;
        long long s = mid * mid;
      //compare the calculate square with given number and return accordingly
        if(s == n) return 1;
        else if(s > n) h = mid - 1;
        else l = mid + 1;
    }
    return 0;
}
