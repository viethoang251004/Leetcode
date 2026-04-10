class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double currentSum;
        for (int countVariable = 0; countVariable < k; countVariable++) {
            currentSum = currentSum + nums[countVariable];
        }

        double maxSum = currentSum;
        for (int countVariable = k; countVariable < nums.size(); ++countVariable) {
            currentSum = currentSum + nums[countVariable] - nums[countVariable - k];
            
            if (maxSum < currentSum) {
                maxSum = currentSum; // Neu sum hien tai lon hon maxSum thi gan maxSum la currentSum
            }
        }

        return maxSum/k;
    }
};