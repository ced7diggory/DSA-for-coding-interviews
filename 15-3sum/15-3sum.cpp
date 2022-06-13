class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //tc will be O(n^2)
        //first sol for interviewer:
        
        int n=nums.size(); 
        sort(nums.begin(), nums.end());
        vector<vector<int>> sol;
        for(int i=0; i<n; i++){
            if(i && nums[i]==nums[i-1]) continue; //we don't want duplicates;
            if(nums[i]>0) break; //as array is sorted;
            int l=i+1, r=n-1; //2 ptrs;
            while(l<r){
                int x=nums[i]+nums[l]+nums[r];
                if(x==0){
                    sol.push_back({nums[i], nums[l], nums[r]});
                    l++; r--;
                    while(l<r && nums[l]==nums[l-1]) l++;
                }
                else if(x>0){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return sol;
    }
};