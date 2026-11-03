class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mid = (nums.size()) / 2;
        int tot = 0;
        for (int i = 0; i < nums.size(); i++) {
            tot += abs(nums[i] - nums[mid]);
        }
        return tot;
    }
};