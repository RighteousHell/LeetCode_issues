class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans = 0.;
        vector<int> merged_array;
        merged_array.insert(merged_array.end(), nums1.begin(), nums1.end());
        merged_array.insert(merged_array.end(), nums2.begin(), nums2.end());
        sort(merged_array.begin(), merged_array.end());
        
        for (auto& tmp: merged_array)
        {
            cout << tmp << " ";
        }
        
        
        int size = merged_array.size();
        if (merged_array.size()%2 == 0)
        {
            ans = (merged_array[size/2] + merged_array[size/2-1])/2.0;
        }
        else 
        {
            ans = merged_array[size/2];
        }
        return ans;
        
    }
};