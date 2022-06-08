class Solution {
public:
    int solve(int l, int piv, int ind, vector<int> &nums){
        int j=l;
        for(int i=l; i<piv; i++){
            if(nums[i]<=nums[piv]){
                swap(nums[i], nums[j]);
                j++;
            }
        }
        swap(nums[piv], nums[j]);
        if(j==ind){
            return nums[j];
        }
        else if(j<ind){
            return solve(j+1, piv, ind, nums);
        }
        else{
            return solve(l, j-1, ind, nums);
        }
    }
    
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0, piv=n-1;
        return solve(0, piv, n-k, nums); //quick select;
        //n-k is the index from the start;
    }
};