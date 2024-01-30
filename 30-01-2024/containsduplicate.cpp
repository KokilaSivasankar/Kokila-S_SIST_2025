/*Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

Example 1:

Input: nums = [1,2,3,1]
Output: true
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int d=0;
        int c=0;
        int n=nums.size();
        for(int i=n-1;i>d;i--)
        {
            if (nums[d]==nums[i])
            {
                c++;
                d++;
            }
        }
        return c>0;      
    }
};
