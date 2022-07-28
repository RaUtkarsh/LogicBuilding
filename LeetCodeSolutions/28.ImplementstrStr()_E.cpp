class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size(), n = needle.size();
        for(int i=0;i<h-n+1;i++){
            if(needle[0] == haystack[i] && needle==haystack.substr(i,n)){
                return i;
            }
        }
        return -1;
    }
};
