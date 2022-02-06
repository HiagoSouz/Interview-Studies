/* 

Given two strings, write a function to check if they are one edit (or zero) away.

EXAMPLES:

pale, pls -> true
pales, pale -> true
pale, bake -> false
o, o -> true
aaa, a -> false

*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool OneAway(string s1, string s2){
    
   
    int m = s1.length(), n = s2.length();
 
     if(m-n > 1 || n-m > 1)
            return false;
     
 
    int count = 0; 
 
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (s1[i] != s2[j])
        {
            if (count == 1)
                return false;
 

            if (m > n)
                i++;
            else if (m< n)
                j++;
            else 
            {
                i++;
                j++;
            }
             
            count++;
        }
 
        else
        {
            i++;
            j++;
        }
    }
 
 
    if (i < m || j < n)
        count++;
        
    if(count==1)
        return true;
    else
        return false;
}

int main()
{
    string s1 = "teste1";
    string s2 = "teste2";
    cout << OneAway(s1,s2);
    return 0;
}
