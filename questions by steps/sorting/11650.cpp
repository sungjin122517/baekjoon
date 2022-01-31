#include <iostream>
#include <algorithm>
using namespace std;

// arrange coordinates

struct Point {
    int x;
    int y;
};

bool comp(const Point &p1, const Point &p2){
	if(p1.x==p2.x)
		return p1.y<p2.y;
	return p1.x<p2.x;
}

int main()
{
    int n;
    cin >> n;

    Point pointList[100001];

    for (int i=0; i<n; i++)
        cin >> pointList[i].x >> pointList[i].y;
    
    sort(pointList, pointList+n, comp);

    for (int j=0; j<n; j++)
        cout << pointList[j].x << ' ' << pointList[j].y << '\n';
    
    

    return 0;

}