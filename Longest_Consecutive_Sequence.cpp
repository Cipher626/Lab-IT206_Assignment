class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) { 
            return 0;
        }

        sort(nums.begin(), nums.end()); 
        int answer = 0;  
        int count = 1;   

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                continue;
            }
            if (nums[i] - nums[i - 1] == 1) 
            {
                count++;
            } else 
            {
                answer = max(count, answer);
                count = 1;
            }
        }
        answer = max(count, answer);
        return answer;
    }
};
