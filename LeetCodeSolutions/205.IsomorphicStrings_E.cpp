class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        map<char,char> n;
        map<char,char> m;
        
        for(int i=0;i<t.size();i++){
            
            if(n.find(s[i]) == n.end() and m.find(t[i]) == m.end()){
                n[s[i]] = t[i];
                m[t[i]] = s[i];
            }
            else if(n[s[i]] != t[i]){
                return false;
            }
        }
        return true;
    }
};
