#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i=0; i<test; i++) {
        int n;
        cin >> n;
        int sum=0;
        for (int j=0; j<n; j++) {
            int m;
            cin >> m;
            sum += m;
        }
        cout << sum << '\n';
    }

    return 0;
}