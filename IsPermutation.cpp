/*

Check Permutation: Given two strings, write a method to decide if one is a
permutation of the other.


Complexity Time: O(n log(n))

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPermutation(string str1,string str2)
{
 
    if(str1.length()==str2.length())
    {
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        
        if(str1==str2)
            return true;
    }
   
   return false;
}


int main()
{
    bool result = isPermutation("blue","elub");
    
    cout << result << endl;
}
