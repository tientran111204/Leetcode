class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3)
            return false;
        int top = 0;
        for(int i = 0; i < arr.size() - 1; i++){
            if(arr[i] == arr[i+1])
                return false;
            else if(arr[i] > arr[i+1]){
                top = i;
                break;
            }
        }
        if(top == 0) 
            return false;
        for(int i = top; i < arr.size() - 1; i++){
            if(arr[i] <= arr[i+1])
                return false;
        }
        return true;
    }
};