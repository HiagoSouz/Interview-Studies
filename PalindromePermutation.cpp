/* 
Given a string, write a function to check if it`s a permutation of a palindrome.
*/


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string PalindromePermutation(string str){
    

    int count[256] = { 0 };

    for (int i = 0; str[i]; i++)
        count[str[i]]++;
 
    int odd = 0;
    for (int i = 0; i < 256; i++) {
        if (count[i] & 1)
            odd++;
 
        if (odd > 1)
            return "FALSE";
    }
 
    return "TRUE";
}

int main()
{
    string s;
    cin >> s;
    cout << PalindromePermutation(s);
    return 0;
}
