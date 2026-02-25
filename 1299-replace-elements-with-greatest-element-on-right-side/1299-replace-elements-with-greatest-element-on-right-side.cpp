class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if(i == n - 1)
                arr[n - 1] = -1;
            else{
                int maxIdx = i + 1;
                for (int j = i + 2; j < n; j++) {
                    if (arr[maxIdx] < arr[j]) 
                        maxIdx = j;
                }
                arr[i] = arr[maxIdx];
            }
        }
        return arr;
    }
};