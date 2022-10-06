// solution for two sum: https://leetcode.com/problems/two-sum/submissions/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numbers;
        vector<int> result;
        for (int i = 0;i < nums.size();i ++) {
            int c = target - nums[i];            
            if (numbers.find(c) == numbers.end()) {
                numbers.insert(make_pair(nums[i], i));
            } else {
                result.push_back(numbers.find(c)->second);
                result.push_back(i);
                return result;
            }
        }
        
        return result;
    }
};