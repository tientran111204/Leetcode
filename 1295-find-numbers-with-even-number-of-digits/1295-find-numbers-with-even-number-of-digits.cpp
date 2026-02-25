class Solution {
public:
    int countDigits(int n){
        int count = 0;
        while (n != 0){
            n /= 10;
            count++;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int x : nums){
            int digits = countDigits(x);
            (digits % 2 == 0) ? (count++) : (count);
        }
        return count;
    }
};