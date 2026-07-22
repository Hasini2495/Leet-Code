class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0 ; i< nums.size() ; i++){
            int temp;
            int digit=0;
            temp=nums[i];
            if(temp == 0){
                digit = 1;
            }
            while(temp >  0){
                digit++;
                temp=temp/10;
            }
            if(digit % 2 == 0){
                count++;
            }
        }
        return count;

        
    }
};