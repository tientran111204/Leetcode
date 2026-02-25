class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int top1 = 0;
        int top2 = (nums[0] < nums[1]) ? 0 : 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[top1]){
                top2 = top1;
                top1 = i;
            }
            else if(nums[i] > nums[top2])
                top2 = i;
        }
        if(nums[top1] >= 2 * nums[top2])
            return top1;
        return -1;
    }
};