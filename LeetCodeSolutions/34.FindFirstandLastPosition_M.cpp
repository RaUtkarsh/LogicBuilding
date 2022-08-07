class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       auto lower = lower_bound(begin(nums), end(nums), target);
        
        if(lower == end(nums) || *lower != target){
            return {-1, -1};
        }
        
        auto upper = upper_bound(begin(nums), end(nums), target);
        
        int a = distance(begin(nums), lower);
        int b = distance(begin(nums), upper) - 1;
        
        return {a, b};
    }
};
