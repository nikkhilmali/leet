class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& words) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> AG;

        for(const string& word : words){
            string key = word;
            sort(key.begin(),key.end());

            if(AG.find(key)==AG.end()) AG[key] = {word};
            else AG[key].push_back(word);
        }

        for(auto group:AG){
            result.push_back(group.second);
        }
        return result;
    }
};