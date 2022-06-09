class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0, piv=n-1, ind=n-k;
        while(l<=piv){
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
                l=j+1;
            }
            else{
                piv=j-1;
            }
        }
        return -1;
    }
};