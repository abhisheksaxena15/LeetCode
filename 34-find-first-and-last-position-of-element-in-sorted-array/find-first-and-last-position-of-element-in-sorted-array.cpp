class Solution {
public:
    
    int findFirst(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1, ans = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                ans = mid; 
                e = mid - 1; 
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans;
    }

   
    int findLast(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1, ans = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                ans = mid; 
                s = mid + 1; 
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans;
    }

    // Main function to find the range
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        int last = findLast(nums, target);
        return {first, last};
    }
};
