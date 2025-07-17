class Solution {
public:
    int searchInsert(vector<int> &nums , int target)
{
    int low = 0;
    int high = nums.size() - 1;
     while(low <= high){
         int middle = (low + high) / 2;

         if(target > nums[middle])
            low = middle + 1;
         else if(target < nums[middle])
            high = middle - 1;
         else if(target == nums[middle])
            return middle;
    }
         return low;
}
};