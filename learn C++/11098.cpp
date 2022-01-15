#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        int m;
        char player[100][21];
        cin >> m;
        int index, max=0;
        for (int j=0; j<m; j++) {
            int price;
            cin >> price >> player[j];
            if (price>max) {
                max=price;
                index=j;
            }
        }
        cout << player[index] << '\n';
    }

    return 0;
}