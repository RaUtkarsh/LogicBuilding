class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> arr;
        
        for(int i=0;i<nums.size();i++){
            int rep = abs(nums[i]);
            
            if(nums[rep-1] > 0){
                nums[rep-1] *= (-1);
            }
            
            else if(nums[rep-1] < 0){
                arr.push_back(abs(nums[i]));
            }
        }
        return arr;
    }
};
