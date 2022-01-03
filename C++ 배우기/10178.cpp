#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for (int i=0; i<n; i++) {
        int c, v;
        cin >> c >> v;
        int dad = c%v;
        int son = c/v; 
        cout << "You get " << son << " piece(s) and your dad gets " << dad 
            << " piece(s)." << '\n';
    }

    return 0;
}