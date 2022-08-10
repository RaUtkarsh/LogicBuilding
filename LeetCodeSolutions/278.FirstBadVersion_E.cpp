// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s = 0, e = n;
        
        
        while(s <= e){
            int mid = s + (e - s) / 2;
        
            int res = isBadVersion(mid);
            
            if(res == true && isBadVersion(mid - 1) != true){
                return mid;
            }
            
            else if(res == false){
                s = mid + 1;
            }
            
            else if (res == true){
                e = mid;
            }
            
            
        }
        return -1;
    }
};
