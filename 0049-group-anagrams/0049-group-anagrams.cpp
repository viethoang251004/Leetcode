class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;

        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            string key = s;

            sort(key.begin(), key.end()); // sap xep chuoi

            mp[key].push_back(s); // them vao nhom
        }

        vector<vector<string>> result;

        for (auto it = mp.begin(); it != mp.end(); it++) {
            result.push_back(it->second);
        }

        return result;
    }
};