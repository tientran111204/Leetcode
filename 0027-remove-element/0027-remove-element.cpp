class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int currentIndex = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] != val){
                nums[currentIndex++] = nums[i];
            }
        }
        return currentIndex;
    }
};