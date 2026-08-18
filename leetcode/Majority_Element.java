class Solution {
    public int majorityElement(int[] nums) {
        Arrays.sort(nums);
        int max=0;
        int maxElement=nums[0];
      
        int count=1;
        for(int i=1;i<nums.length;i++){
            
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                count=1;
            }
            if(count > max){
                max = count;
                maxElement=nums[i];
            }
        }
        return maxElement;
    }
}