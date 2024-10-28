class Solution {
public:
    int longestSquareStreak(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::unordered_set<long long> num_set(nums.begin(), nums.end());
        int max_length = -1;

        for (const auto& num : nums) {
            int current_length = 1;
            long long current = num;

            while (true) {
                long long next = current * current;

                if (next > std::numeric_limits<long long>::max()) {
                    break;
                }

                if (!num_set.count(next)) {
                    break;
                }

                current_length += 1;
                current = next;
            }

            if (current_length >= 2) {
                max_length = std::max(max_length, current_length);
            }
        }

        return max_length >= 2 ? max_length : -1;
    }
};
