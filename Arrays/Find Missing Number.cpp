class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int l= nums.size();
        for(int i=0;i<=l-1;i++){
            sum += nums[i]; //this sum is the addition of the total no of array element

        }

        int sum2= l*(l+1)/2;//this sum is the addition of the total no of  element from 0 to n
        int missing=sum2 - sum ; 

        return missing;
    }
};
