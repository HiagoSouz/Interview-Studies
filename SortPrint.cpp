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
