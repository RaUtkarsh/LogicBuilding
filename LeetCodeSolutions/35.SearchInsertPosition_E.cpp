class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        
        while(s <= e){
            
            int mid = s + (e - s)/2;
            
            if(target == nums[mid] ){
                return mid;
            }
            if(nums[mid] > target){
                e = mid - 1;
            }
            else if(nums[mid] < target){
                s = mid + 1;
            }
        }
        return s;
    }
};
