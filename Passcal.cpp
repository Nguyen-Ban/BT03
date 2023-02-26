#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int passcal[N][N+1];
    passcal[0][0] = 0;
    passcal[0][1] = 1;
    passcal[0][2] = 0;

    for(int i = 1; i < N; i++){
        passcal[i][0] = 0;
        for(int j = 1; j <= i+1; j++){
            passcal[i][j] = passcal[i-1][j-1] + passcal[i-1][j];
        }

        passcal[i][i+2] = 0;
    }

    for(int i = 0; i< N; i++){
        for(int j = 1; j <= i+1; j++){
            cout << passcal[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
