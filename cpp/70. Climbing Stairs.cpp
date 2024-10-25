class Solution {
public:
    int climbStairs(int n) {
        if (n == 0) return 1;
        if (n == 1) return 1;

        int first = 1;
        int second = 1;
        int ways = 0;

        for (int i = 2; i <= n; i++){
            ways = first + second;
            first = second;
            second = ways;
        }

        return ways;
    }
};