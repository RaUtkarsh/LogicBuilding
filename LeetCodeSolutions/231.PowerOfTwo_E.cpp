//BruteForce

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        for(int i=0; i<=30;i++){
            int a = pow(2, i);
            
            if(a==n){
                return true;
            }
        }
        return false;
        
    }
};


//Optimized Solution

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        return (n & (n-1)) == 0;
    }
}
