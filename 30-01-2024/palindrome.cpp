/*Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.*/


class Solution {
public:
    bool isPalindrome(int x) {
        long y=0;
        int z=x;
        while(z > 0)
        {
            y=y*10+z%10;
            z /= 10;
        }
        return y==x;        
    }
};
