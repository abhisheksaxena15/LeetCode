class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergearray(nums1.size() + nums2.size());
        
        merge(nums1.begin() , nums1.end() , nums2.begin() , nums2.end() , mergearray.begin());
        
        sort(mergearray.begin() , mergearray.end());
        int n = mergearray.size() - 1;
        if(n % 2 == 0)
                return mergearray[n/2];
        else
                return (mergearray[n/2] + mergearray[(n/2) + 1])/2.0;
    }
};