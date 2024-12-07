class Solution {
public:
    // Helper function to find the first occurrence of target
    int findFirst(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1, ans = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                ans = mid; // Update answer
                e = mid - 1; // Move left to find earlier occurrence
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans;
    }

    // Helper function to find the last occurrence of target
    int findLast(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1, ans = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                ans = mid; // Update answer
                s = mid + 1; // Move right to find later occurrence
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
