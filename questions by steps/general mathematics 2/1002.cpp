#include <iostream>
#include <cmath>
using namespace std;

// turret

int numIntersection(int x1, int y1, int r1, int x2, int y2, int r2) {
    double dist = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    double rDiff = r1>r2 ? r1-r2 : r2-r1;

    if (dist==0 && r1==r2)
        return -1;
    else if (dist==r1+r2 || dist==rDiff)
        return 1;
    else if (dist<r1+r2 && rDiff<dist)
        return 2;
    else
        return 0;
}

int main()
{
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        int x1, x2, y1, y2, r1, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        cout << numIntersection(x1, y1, r1, x2, y2, r2) << '\n';
    }

    return 0;
}