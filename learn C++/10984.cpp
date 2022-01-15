#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int sem, courseNum;
    cin >> sem;
    
    for (int i=0; i<sem; i++) {
        cin >> courseNum;
        int credit=0, totalCredit=0;
        float grade=0, totalGrade=0;
        for (int j=0; j<courseNum; j++) {
            cin >> credit >> grade;
            totalCredit += credit;
            totalGrade += credit*grade;
        }
        cout << totalCredit << " " << setprecision(2) << totalGrade/totalCredit << '\n';
    }

    return 0;
}