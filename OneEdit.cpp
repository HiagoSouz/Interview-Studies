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
    
    int n1 = s1.length();
    int n2 = s2.length();
    int m;
    int count = 0;
    
    if(n1>n2)
        m = n1;
    
    else 
        m = n2;
     
    if(n1!=n2){
        
        if(n1-n2 > 1 || n2-n1 > 1){
            return false;
        }
        
        
    }
    
    for(int i=0;i<m;i++){
        if(s1[i]!=s2[i])
            count++;
            
        if(count>1){
            return false;
        }
    }
    
    return true;
    
}

int main()
{
    string s1 = "teste1";
    string s2 = "teste2";
    cout << OneAway(s1,s2);
    return 0;
}
