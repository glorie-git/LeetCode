class Solution {
public:
    unordered_map<int, int> memo = {{1, 1}, {2, 2}};
    int climbStairs(int n) {
        return fib(n);
    }
private:
    int fib(int n){
        if (memo[n]) {
            return memo[n];
        } else {
            memo[n] = fib(n-1) + fib(n-2);
            return memo[n];
        }
    }
};