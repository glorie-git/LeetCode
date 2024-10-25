class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> charCount;
        int res = 0;

        for (const char& chr: s){
            charCount[chr]++;
            if(charCount[chr] % 2 == 0){
                res += 2;
            }
        }

        for(const auto& chr: charCount){
            if(chr.second % 2 == 1){
                res += 1;
                break;
            }
        }

        return res;
    }
};