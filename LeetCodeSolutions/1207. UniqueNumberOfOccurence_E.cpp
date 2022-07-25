//main logic behind this solution is a property of set
//i.e, set and unordered map do not allow duplicate values 
//compare the sizes if they are same return true else false

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      //create an unordered map named m  
      unordered_map <int, int> m;
        
      //populate the map with the array
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        
      //create a set named s
        set<int> s;
        
      //insert elements from m 
        for(auto z = begin(m); z!=end(m); z++){
            s.insert(z -> second);
        }
        
      //check if the size of m and s are same
        if(m.size() == s.size()){
            return true;
        }else{
            return false;
        }
        }
};
