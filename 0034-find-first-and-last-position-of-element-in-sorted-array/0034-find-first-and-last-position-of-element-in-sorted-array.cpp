class Solution {
public:
    int Bound(int n , vector<int>&arr,bool Fun){
        int size = arr.size();
        int high = size-1;
        int low = 0;
        int ans = size;
        while(low<=high){
            int mid = low+(high-low)/2;
            bool whichFun = Fun ? (arr[mid]>=n):(arr[mid]>n);
            if(whichFun){
                ans= mid;
                high = mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int lowerBound = Bound(target , nums,true);
        
        if(lowerBound==nums.size()||nums[lowerBound]!=target){
            return {-1,-1};
        }
        int upperBound = Bound(target , nums,false);
        return {lowerBound,upperBound-1};
    }
};