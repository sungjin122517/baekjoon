#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    for (int i=0; i<testCase; i++) {
        int s, n, total=0;
        cin >> s;
        cin >> n;
        total += s;
        for (int i=0; i<n; i++) {
            int q, p;
            cin >> q >> p;
            total += q*p;
        }
        cout << total << '\n';
    }
        
    return 0;
}