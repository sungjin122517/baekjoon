#include <iostream>
#include <algorithm>
using namespace std;

// coordinate compression
// 만약 정확한 값이 필요 없고 값의 대소 관계만 필요하다면, 
// 모든 수를 0 이상 N 미만의 수로 바꿀 수 있습니다.

struct Number {
    int x;
    int index;
    int ans;
};

bool compByX(const Number &p1, const Number &p2) {
    return p1.x<p2.x;
}

bool compByIndex(const Number &p1, const Number &p2) {
    return p1.index<p2.index;
}

int main()
{
    int n;
    cin >> n;

    Number numList[n];

    for (int i=0; i<n; i++) {
        cin >> numList[i].x;
        numList[i].index=i;
    }

    stable_sort(numList, numList+n, compByX);

    int count=0;
    for (int i=0; i<n; i++) {
        if (i==0) {
            numList[i].ans=count;
            continue;
        }
        if (numList[i].x!=numList[i-1].x) 
            count++;
        numList[i].ans=count;
        
    }

    stable_sort(numList, numList+n, compByIndex);

    for (int i=0; i<n; i++)
        cout << numList[i].ans << ' ';

    return 0;

}