/* 

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example 1:

Input: haystack = "hello", needle = "ll"
Output: 2
Example 2:

Input: haystack = "aaaaa", needle = "bba"
Output: -1
Example 3:

Input: haystack = "", needle = ""
Output: 0



O(n) solution
*/

int strStr(string haystack, string needle){
    
    if(needle.empty())
        return 0;
        
    if(haystack.find(needle) == string :: npos)
        return -1;
        
    return haystack.find(needle);
}
