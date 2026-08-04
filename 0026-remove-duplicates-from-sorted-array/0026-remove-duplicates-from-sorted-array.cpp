class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int duplicates=0;
        int n = nums.size();
        int j=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[j]=nums[i];
                j++;
            }
        }
        nums[j]=nums[n-1];
        j++;
    return j;
    }
};