class Solution {
    public int sumOfUnique(int[] nums) {
        int sum=0;
        for(int i=0;i<nums.length;i++){ // i loop checks each element (for i=0 arr[0]=1)
            int count=0;
            for(int j=0;j<nums.length;j++){ // j loop checks how many times (not this j loop checks how many times 1 appeared)
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if(count == 1){
                sum+=nums[i];
            }
        }
        return sum;
        
    }
}