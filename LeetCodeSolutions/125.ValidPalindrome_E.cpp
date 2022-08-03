class Solution {
private:
    bool valid(char ch){
        if(ch >= 'A' && ch <='Z' || ch >= 'a' && ch <='z' || ch >= '0' && ch <= '9'){
            return 1;
        }
        return 0;
    }
    char toLowerCase(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch <= 9 && ch >= 0))
            return ch;
        else{
            ch = ch - 'A' + 'a';
            return ch;
        }
    }
    
public:
    bool isPalindrome(string s) {
        string temp  = "";
        for(int i=0;i<s.length();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }
        
        for(int i=0;i<temp.length();i++){
            temp[i] = toLowerCase(temp[i]);
        }
        
        int st = 0, e = s.length() - 1;
    
    while(st <= e){
        if(isalnum(s[st]) == 0){
            st++;
        }
        else if(isalnum(s[e]) == 0){
            e--;
        }
        else if(toLowerCase(s[st]) != toLowerCase(s[e]))
            return  false;
        else{
            st++;
            e--;
        }
    }
    return true;
    }
};
