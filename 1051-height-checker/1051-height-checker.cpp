class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> a(heights);
        for (int i = 0; i < heights.size() - 1; i++) {
            int swapped = 0;
            for (int j = 0; j < heights.size() - i - 1; j++) {
                if (heights[j] > heights[j + 1]) {
                    int temp = heights[j];
                    heights[j] = heights[j + 1];
                    heights[j + 1] = temp;
                    swapped += 1;
                }
            }
            if (swapped == 0)
                break;
        }
        int count = 0;
        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != a[i]) count++;
        }
        return count;
    }
};