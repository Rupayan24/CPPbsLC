/* T.C. = O(logn)  
//If the target element is not present then return left pointer(here st) as at the last binary search only nums[mid] will be present, and as the target element will be smaller than nums[mid], so we will return mid-1 as value
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size()-1;

        while(st <= end)
        {
        
            int mid = (st+end)/2;

            if(nums[mid] == target)
            {
                return mid;
            }

            else if(target < nums[mid])
            {
                end = mid-1;
            }
            else if(target > nums[mid])
            {
                st = mid+1;
            }
            
        }
        return st;
    }
};
*/