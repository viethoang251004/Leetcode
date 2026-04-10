// // #include <iostream>
// // using namespace std;

// // class Solution {
// // public:
// //     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
// //         int i = m - 1;
// //         int j = n - 1;
// //         int k = m + n - 1;

// //         while (i >= 0 && j >= 0) {
// //             if (nums1[i] > nums2[j]) {
// //                 nums1[k] = nums1[i];
// //                 i--;
// //             } else {
// //                 nums1[k] = nums2[j];
// //                 j--;
// //             }
// //             k--;
// //         }

// //         while (j >= 0) {
// //             nums1[k] = nums2[j];
// //             j--;
// //             k--;
// //         }
// //     }
// // };

// // class Solution {
// //     public:
// //         void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
// //             int i = m - 1;
// //             int j = n - 1;
// //             int k = m + n - 1;

// //             while (i >= 0 && j >= 0) {
// //                 if (nums1[i] > nums2[j]) {
// //                     nums1[k] = nums1[i];
// //                     i--;
// //                 } else {
// //                     nums1[k] = nums2[j];
// //                     j--;
// //                 }
// //                 k--;
// //             }

// //             while (j >= 0) {
// //                 nums1[k] = nums2[j];
// //                 j--;
// //                 k--;
// //             }
// //         }
// // };


// class Solution {
//     public:
//         void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//             int i = m - 1;
//             int j = n - 1;
//             int k = m + n - 1;

//             while (i >= 0 && j >= 0) {
//                 if (nums1[i] > nums2[j]) {
//                     nums1[k] = nums1[i];
//                     i--;
//                 } else {
//                     nums1[k] = nums2[j];
//                     j--;
//                 }
//                 k--;
//             }

//             while (j >= 0) {
//                 nums1[k] = nums2[j];
//                 j--;
//                 k--;
//             }
//         }
// };



class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        if (n == 0)
            return;
        if (m == 0) {
            for (int i = 0; i < n; i++) {
                nums1[i] = nums2[i];
            }
            return;
        }
        while (i < m) {
            if (nums1[i] > nums2[j]) {
                swap(nums1[i], nums2[j]);
                sort(nums2.begin(), nums2.end());
            }
            i++;
        }
        // j = 0;
        while (i < m + n) {
            nums1[i] = nums2[j];
            i++;
            j++;
        }
    }
};