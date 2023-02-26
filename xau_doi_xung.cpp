#include <iostream>
#include <string>

using namespace std;

bool doi_xung( string s )
{
    for(int i = 0; i < s.length()/2; i++){
        if(s[i] != s[s.length()-1-i]){
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{
    string s;
    getline(cin, s);
    if(doi_xung(s) == true){
        cout << "Yes";
    }
    else cout << "No";
    return 0;
}
