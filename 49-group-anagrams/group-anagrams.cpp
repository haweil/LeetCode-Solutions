class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> anagramMap;

        int n = strs.size();
        for (int i = 0; i < n; i++)
        {
            string sortedStr = strs[i];
            sort (sortedStr.begin(), sortedStr.end());
            anagramMap[sortedStr].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for (map<string, vector<string>>::iterator it = anagramMap.begin(); it != anagramMap.end(); ++it) {
            result.push_back(it->second);
        }
        return result;
    }
};