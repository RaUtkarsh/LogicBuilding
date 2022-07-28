class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length()<1){
            return 0;
        }
        int end = s.length() - 1;
        while(end >= 0 && s[end] == ' '){
            --end;
        }
        const int start = end;
        while(end >= 0 && s[end] != ' '){
            --end;
        }
        return start - end;
    }
};
