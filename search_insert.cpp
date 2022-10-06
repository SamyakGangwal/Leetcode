// solution for search insert position: https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int binarySearch(vector<int> &nums, int target, int left, int right) {
        if (right >= left) {
            int mid = (left + right) / 2;
            
            if (nums[mid] == target) {
                return mid;
            }
            
            if (nums[mid] > target) {
                return binarySearch(nums, target, left, mid - 1);
            }
            
            return binarySearch(nums, target, mid + 1, right);
        }
        
        return left;
        }
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums, target, 0, int(nums.size() - 1));
        
    }
};
