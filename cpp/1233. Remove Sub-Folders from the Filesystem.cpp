class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        std::sort(folder.begin(), folder.end());
        std::vector<std::string> result;

        for (const auto& dir : folder) {
            // Check if the current folder is a subfolder of the last added folder
            if (result.empty() ||  ) {
                result.push_back(dir);
            }
        }

        return result;
    }
};