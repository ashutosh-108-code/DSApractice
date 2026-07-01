class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n = arr.size();
        int high = n-1;
        int low = 0;
        int ans = n;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[mid]>=target){
                ans = mid;
                 high= mid-1;
            }
            if(arr[mid]<target){
                low= mid+1;

            }
        
        }
        return ans;
    }
};