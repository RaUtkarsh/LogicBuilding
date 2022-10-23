//Brute Force
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        return nums[nums.size() / 2];
    }
};


//Moore's Voting Algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority, cnt = 0;

        for(int i = 0; i < nums.size(); i++){
            if(cnt) cnt += (nums[i] == majority ? 1 : -1);
            else{
                majority = nums[i];
                cnt++;
            }            
        }
        return majority;
    }
};
