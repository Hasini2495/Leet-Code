class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n1,n2;
        for(int i=0;i<nums.size();i++){
        sort(nums.begin(),nums.end());
        n1=nums[nums.size()-1];
        n2=nums[nums.size()-2];
        }
        return (n1-1)*(n2-1);
        
    }
};