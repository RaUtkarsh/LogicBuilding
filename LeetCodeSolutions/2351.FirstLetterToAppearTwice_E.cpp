class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> m;
        int i=0;
        for(i=0;i<s.size();i++){
            m[s[i]]++;
            if(m[s[i]] == 2){
                break;
            }
        }
        return s[i];
    }
};
