/* 
Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.

For example, 121 is a palindrome while 123 is not.
*/

class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0 || x % 10 == 0 && x != 0)
            return false;

        int aux = 0;
        while(x > aux) {
            aux = aux * 10 + x % 10;
            x /= 10;
        }
        
        if(x==aux || x==aux/10)
            return true;
        
        return false;
    }
};
