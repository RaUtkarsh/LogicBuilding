class Solution {
public:
    int bitwiseComplement(int n) {
        
        int m = n;
        int num = 0;
        
        if(n==0){
            return 1;
        }
        
        while(m!=0){
            num = (num << 1) | 1;
            m = m >> 1;
        }
        
        int ans = (~n) & num;
        
        return ans;
    }
};
