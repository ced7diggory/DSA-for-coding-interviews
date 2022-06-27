class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //[-3, 1, -3, 4, 2]
        int n=nums.size(), i=0;
        while(i<n){
            int ind=abs(nums[i])-1;
            if(nums[ind]<0){
                return abs(nums[i]);
            }
            nums[ind]*=-1;
            i++;
        }
        return 0;
    }
};