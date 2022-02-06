#include <iostream>
#include <algorithm>
using namespace std;

// sort by age

struct Member {
    int age;
    string name;
};

bool comp(const Member &p1, const Member &p2){
	return p1.age<p2.age;
}

int main()
{
    int n;
    cin >> n;
    

    Member memberList[100000];

    for (int i=0; i<n; i++) 
        cin >> memberList[i].age >> memberList[i].name;
    
    stable_sort(memberList, memberList+n, comp);

    for (int j=0; j<n; j++)
        cout << memberList[j].age << ' ' << memberList[j].name << '\n';
    

    return 0;

}