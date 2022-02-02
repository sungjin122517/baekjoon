#include <iostream>
#include <algorithm>
using namespace std;

// sort words

/*

void swap(string *str1, string *str2) {
    string temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

int deleteElement(string arr[], int n, int j) {
    n-=1;
    for (int k=j; k<n; k++)
        arr[k]=arr[k+1];

    return n;
}

*/

int compare(string a, string b) {
    // 길이가 같다면 사전 순으로
    if (a.length()==b.length())
        return a<b;
    // 길이가 다르다면 짧은 순으로
    else 
        return a.length()<b.length();
}

// string arr[20000];
int main()
{
    int n;
    cin >> n;
    cin.ignore();

    string arr[n];
    int num=n;
    for (int i=0; i<num; i++)
        getline(cin, arr[i]);
    
    // for (int i=0; i<num; i++) {
    //     for (int j=i+1; j<num; j++) {
    //         if (arr[i].compare(arr[j])==0)
    //             num = deleteElement(arr, num, j);
    //         else if (arr[i].length()>arr[j].length())
    //             swap(&arr[i], &arr[j]);
    //         else if (arr[i].length()==arr[j].length()) {
    //             if (arr[i]>arr[j])
    //                 swap(&arr[i], &arr[j]);
    //         }
    //     }
    // }

    /* sort 함수의 기본 역할: 길이순으로 정렬
    하지만 세번째 parameter가 추가로 구현 (compare in this case)
    단어를 모두 정렬한 뒤에는 같은 단어가 앞뒤로 모두 붙어있다.
    */
    sort(arr, arr+n, compare);

    for (int i=0; i<num; i++) {
        // 중복된 경우 한 번만 출력
        if (arr[i]==arr[i-1])
            continue;
        cout << arr[i] << '\n';
    }

    return 0;

}