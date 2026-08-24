class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){}
            else{return i-1;
            break;}
        }
        return n-1;
    }
};