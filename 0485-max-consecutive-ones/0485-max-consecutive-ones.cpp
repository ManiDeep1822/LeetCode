class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int count = 0;

        int i = 0;
        int j = 0;
        int n = nums.size();

        while(j < n) {
            if(nums[i] == 1 && nums[j] == 1) {
                count++;
                
                if(count > max) {
                    max = count;
                }

                j++;
            } else {
                count = 0;
                i = j + 1;
                j = i;
            }

            // if(max < count) {
            //     count = max;
            // }
        }

        if(max > count) {
            return max;
        }
        return count;
    }
};