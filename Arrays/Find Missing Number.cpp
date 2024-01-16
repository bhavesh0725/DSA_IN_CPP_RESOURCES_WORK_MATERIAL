class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sumOffArrayElement=0;
        int lengthOffArray= nums.size();
        for(int i=0;i<=l-1;i++){
            sumOffArrayElement += nums[i]; //this sum is the addition of the total no of array element

        }

        int sumOffTotalElement= lengthOffArray*(lengthOffArray+1)/2;//this sum is the addition of the total no of  element from 0 to n
        int missingElement=sumOffTotalElement - sumOffArrayElement ; 

        return missingElement;
    }
};
