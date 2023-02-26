#include <iostream>
#include <bits/stdc++.h>

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
    int T;
    cin >> T;
    int A, B;

    while(T > 0){
        cin >> A >> B;
        string s;
        int dem = 0;

        for(int i = A; i <= B; i++){
            s = to_string(i);
            if(doi_xung(s) == true) dem++;
        }

        cout << dem << endl;
        T--;
    }

    return 0;
}
