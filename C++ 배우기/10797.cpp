#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count=0;
    for (int i=0; i<5; i++) {
        int m;
        cin >> m;
        if (n==m)
            count++;
    }
    cout << count;

    return 0;
}