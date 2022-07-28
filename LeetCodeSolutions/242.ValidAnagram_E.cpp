//1st approach 
//sort both strings and return if they are equal or not.


class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return (s == t);
        
    }
};


//2nd approach
//simply count the number of characters in the string and return value accordingly.

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char, int> m, n;
        for(char c:s){
            m[c]++;
        }
        for(char c:t){
            n[c]++;
        }
        for(int i=0;i<s.size();i++){
            if(m[s[i]]!=n[s[i]]){
                return false;
            }
        }
        return true;
    }
};
