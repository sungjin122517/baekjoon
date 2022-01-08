#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count=0;
    int mark;
    bool check = false;
    for (int i=0; i<n; i++) {
        int m;
        cin >> m;
        if (m==1 && !check) {
            mark=1;
            count+=mark;
            check = true;
        }
        else if (m==1 && check) {
            mark++;
            count+=mark;
        }
        else {
            mark=0;
            check=false;
        }
    }
    cout << count;

    return 0;
}