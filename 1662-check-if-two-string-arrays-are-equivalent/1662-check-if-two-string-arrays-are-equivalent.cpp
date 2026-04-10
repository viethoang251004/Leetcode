class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string result = "";
        string result2 = "";
        for (string s : word1) {
            result = result + s;
        }
        for (string s : word2) {
            result2 = result2 + s;
        }
        if (result == result2) {
            return true;
        } else {
            return false;
        }
        // return result.empty();
    }
};