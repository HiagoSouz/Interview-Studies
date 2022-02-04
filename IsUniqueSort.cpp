/*

Optimized with native Sort function 

Given an integer array nums, return true if any value appears at least twice in the array, 
and return false if every element is distinct.

O(n log n)

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool containsDuplicate(vector<int> str)
{
 
    sort(str.begin(), str.end());
 
    for (int i = 0; i < str.size()-1; i++) {
 
        if (str[i] == str[i+1]) {
            return true;
        }
    }
    return false;
}


int main()
{
    bool result = containsDuplicate(1,2,3,4,4);
    
    cout << result << endl;
    
    return 0;
}
