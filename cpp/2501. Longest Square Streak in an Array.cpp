class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_set<int> num_set(nums.begin(), nums.end());
        int max_length = -1;

        for(const auto& num : nums){
            int current_length = 1;
            long long current = num;

            while (num_set.contains(current*current)) {
                current_length += 1;
                current = current*current;
            }

            if (current_length >= 2){
                max_length = max(max_length, current_length);
            }
        }

        return max_length >= 2 ? max_length : -1;
    }
};