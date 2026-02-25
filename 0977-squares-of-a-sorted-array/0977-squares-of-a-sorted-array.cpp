class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        vector<int> a = nums;
        for(int i = n - 1; i >= 0; i--){
            if(abs(nums[left]) > abs(nums[right])){
                a[i] = pow(nums[left++], 2);
            }
            else{
                a[i] = pow(nums[right--], 2);
            }
        }
        return a;
    }
};