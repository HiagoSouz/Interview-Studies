/* 


Given a string, write a function to compress it by shortening every sequence of the same character to that character followed by the number of repetitions.
ex:


StringCompression(“a”) = "a1"
StringCompression(“aaa”) = "a3"
StringCompression(“aaabbb”) = "a3b3"
StringCompression(“aaabccc”) = "a3b1c3"

*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    int count=0;
    
    cin >> str;


    sort(str.begin(), str.end());
    
    for(int i=0;i<str.length();i++){
        count++;
        if(str[i]!=str[i+1]){
            cout << str[i] << count << endl;
            count = 0;
        }
    }
    return 0;
}
