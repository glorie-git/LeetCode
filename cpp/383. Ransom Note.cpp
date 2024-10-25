class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int initialSize = magazine.size();
        for(const auto& chr: ransomNote){
            auto it = magazine.find(chr);
            for (auto it = magazine.begin(); it != magazine.end(); it++){
                if ((*it) == chr){
                    magazine.erase(it);
                    break;
                }
            }
        }

        if ((initialSize - magazine.size()) == ransomNote.size()) return true;
        else return false;

    }
};