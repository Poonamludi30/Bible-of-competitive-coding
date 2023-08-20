class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int unique = 1,i = 1;
        while(i<nums.size())
        {
            if(nums[i]==nums[i-1])
            {
                nums.erase(nums.begin()+i);
            }
            else
            {
                i++;unique++;
            }

        }

        return unique;
        
    }
};