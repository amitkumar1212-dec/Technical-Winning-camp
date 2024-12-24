class Solution {
public:
    void sortColors(vector<int>& nums) {
        int f=0,m=0,l=nums.size();
        while(m!=l)
        {
            if(nums[m]==0)
            {
                swap(nums[m],nums[f]);
                m++;f++;
            }
            else if(nums[m]==1)
            {
                m++;
            }
            else
            {
                swap(nums[m],nums[l-1]);
                l--;
            }
        }
    }
};