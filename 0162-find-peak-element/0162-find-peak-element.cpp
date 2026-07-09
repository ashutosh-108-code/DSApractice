class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int st= 0;
        int end = n-1;
        while(st<end){
            int mid = st+(end-st)/2;
            if(n==1) return 0;
            if(mid==0&&nums[mid+1]<nums[mid]||mid==n-1&&nums[mid-1]<nums[mid]){
                return mid;
            }
            if(nums[mid+1]<nums[mid]&&nums[mid-1]<nums[mid]){
                return mid;
            }
            if(nums[mid]<nums[mid+1]||nums[mid]<nums[end]){
                st=mid+1;
            }
            else{end=mid;}
        }
        return end;
    }
};