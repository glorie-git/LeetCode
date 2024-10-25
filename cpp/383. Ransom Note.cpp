class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> charCount;
        
        for(const char& chr: magazine){
            charCount[chr]++;
        }

        for(const char& chr: ransomNote){
            if(charCount[chr] > 0){
                charCount[chr]--;
            } else {
                return false;
            }
        }

        return true;
    }
};