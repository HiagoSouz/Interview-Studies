/* 
Not finished
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string PalindromePermutation(string s){
    
    int n = s.length();
    
    cout << n << endl;
    string c;
    
    for(int i=0;i<n;i++){
        c = s[i];
        
    
        string achou = find(s.begin(), s.end(), c);
        if (it != s.end())
            s.erase(achou);
            
        else 
            s.push_back(c);
            
    }
    return c;
}

int main()
{
    string s;
    cin >> s;
    cout << PalindromePermutation(s);
    return 0;
}

