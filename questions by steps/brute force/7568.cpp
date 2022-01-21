#include <iostream>
#include <cmath>
using namespace std;

// build 덩치

int main()
{
    int n;
    cin >> n;

    int build[n][2]={};

    for (int i=0; i<n; i++) 
        cin >> build[i][1] >> build[i][2];
    
    for (int i=0; i<n; i++) {
        int rank=1;
        for (int j=0; j<n; j++) {
            if (build[i][1] < build[j][1] && build[i][2] < build[j][2])
                rank++;
        }
        cout << rank << ' ';
    }

    return 0;
}