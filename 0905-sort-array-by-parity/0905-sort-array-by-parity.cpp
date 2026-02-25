class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int idx = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0){
                int temp = nums[idx];
                nums[idx] = nums[i];
                nums[i] = temp;
                idx++;
            }
        }
        return nums;
    }
};