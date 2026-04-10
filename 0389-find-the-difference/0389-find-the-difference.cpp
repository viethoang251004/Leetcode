class Solution {
public:
    char findTheDifference(string s, string t) {
        // Sort alphabetically
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        // Compare each variable at each position countVariable between 2 arrays s and t
        for (int countVariable = 0; countVariable < s.length(); countVariable++) {
            if (s[countVariable] != t[countVariable]) {
                return t[countVariable];
            }
        }

        return t[t.length() - 1];
    }
};