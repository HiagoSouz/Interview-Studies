/*
Brute Force solution: O(n²)

Solution utilizing sort and complexity time O(n log n): 
https://github.com/HiagoSouz/Interview-Studies/blob/main/IsUniqueSort.cpp

*/

#include <iostream>
#include <vector>

using namespace std;

bool containsDuplicate(string nums) {
       int n = nums.size();
    
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i!=j)
                if(nums[i]==nums[j])
                    return true;
    
    return false; 
}
    
int main()
{
    bool result = containsDuplicate("abcd");
    
    cout << result << endl;
    
    return 0;
}
