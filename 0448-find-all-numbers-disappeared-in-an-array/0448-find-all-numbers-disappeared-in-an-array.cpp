class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int index = nums[i]-1;
            while(nums[index] != index+1){
                int temp = nums[index];
                nums[index] = index+1;
                index = temp-1;
            }
        }

        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]-1 != i) res.push_back(i+1);
        }
        return res;
    }
};