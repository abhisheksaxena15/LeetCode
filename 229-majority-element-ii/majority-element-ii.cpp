class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        set<int> alreadyocc;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (alreadyocc.count(nums[i])) {
                continue;
            }

            alreadyocc.insert(nums[i]);

            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }

            if (count > n / 3) {
                result.push_back(nums[i]);
            }
        }

        return result;
    }
};
