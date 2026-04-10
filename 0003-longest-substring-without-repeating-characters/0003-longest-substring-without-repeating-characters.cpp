class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int totalLengthOfTheLongestSubstringWithoutDuplicateCharacters = 0;
        // int left = 0, right = 0;
        // for (int countVariable = 0; countVariable < s.size(); ++countVariable) {
        //     for (int countVariable2 = 1; countVariable2 < s.size(); ++countVariable2) {
        //         if (s[countVariable] == s[countVariable2]) {
        //             // left = left + 1;
        //             totalLengthOfTheLongestSubstringWithoutDuplicateCharacters = 1;
        //         } else if (s[countVariable] != s[countVariable2]) {
        //             totalLengthOfTheLongestSubstringWithoutDuplicateCharacters += 1;
        //         }
        //     }
        //     // if (s[countVariable] == s[countVariable + 1]) {
        //     //     return totalLengthOfTheLongestSubstringWithoutDuplicateCharacters;
        //     // } else if (s[countVariable] != s[countVariable + 1]) {
        //     //     return totalLengthOfTheLongestSubstringWithoutDuplicateCharacters += 1;
        //     // }
        // }
        // return totalLengthOfTheLongestSubstringWithoutDuplicateCharacters;

        int lastSeen[128]; //lastSeen['a'] tức là lastSeen[]
        for (int i = 0; i < 128; i++) {
            lastSeen[i] = -1; // -1 nghia la "chua xuat hien lan nao"
        }

        int maxLen = 0;
        int left = 0;

        for (int right = 0; right < s.size(); right++) {
            int ascii = (int) s[right];

            if (lastSeen[ascii] >= left) {
                left = lastSeen[ascii] + 1; // nhảy left qua vị trí trùng
            }

            lastSeen[ascii] = right; // cập nhật vị trí mới nhất của ký tự

            int currentLen = right - left + 1;
            if (currentLen > maxLen) {
                maxLen = currentLen;
            }
        }
        return maxLen;
    }
};