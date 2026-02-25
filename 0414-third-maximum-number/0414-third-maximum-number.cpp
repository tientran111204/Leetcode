class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int> arr = nums;
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            int swapped = 0;
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] < arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped += 1;
                }
            }
            if (swapped == 0)
                break;
        }
        int res = arr[0];
        int temp = 1;
        for(int i = 0; i < n; i++){
            if(arr[i] != res){
                res = arr[i];
                temp++;
            }
            if(temp == 3) return res;
        }
        return arr[0];
    }
};