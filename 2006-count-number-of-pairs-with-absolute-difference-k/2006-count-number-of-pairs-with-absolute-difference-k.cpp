class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans = 0;
        int cnt_arr[101] = {0};
        
        for (auto& tmp: nums)
        {
            ++cnt_arr[tmp];
        }
        
        for (int i = k+1; i < 101; ++i)
        {
            ans += cnt_arr[i] * cnt_arr[i - k];
        }
        
        return ans;
        
    }
};