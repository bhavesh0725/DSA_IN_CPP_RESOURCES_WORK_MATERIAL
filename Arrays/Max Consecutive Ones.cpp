class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int countForConsecutive=0;
        int countForMaxi=0;
        for (int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                countForConsecutive +=1;
                countForMaxi = max(countForConsecutive, countForMaxi);
            }
            else{
                countForConsecutive =0;
                countForMaxi = max(countForConsecutive, countForMaxi);
            }
           
        }
         return countForMaxi;
        
    }
};
