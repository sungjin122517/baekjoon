#include <iostream>
#include <cstring>
using namespace std;

void strToTime (const char str[], int& hour, int& min, int& sec) {
    if (strlen(str) == 8) {
        hour = (str[0]-'0')*10 + str[1]-'0';
        min = (str[3]-'0')*10 + str[4]-'0';
        sec = (str[6]-'0')*10 + str[7]-'0'; 
    }   
}

struct Time {
    int hour;
    int minute;
    int second;
};

void printTime(Time time) {
    string hour = to_string(time.hour);
    string minute = to_string(time.minute);
    string second = to_string(time.second);

    hour = hour.length() == 1 ? '0'+hour : hour;
    minute = minute.length() == 1 ? '0'+minute : minute;
    second = second.length() == 1 ? '0'+second : second;

    cout << hour << ":" << minute << ":" << second;
}

int main()
{
    char currTime[10], startTime[10];
    cin >> currTime;
    cin >> startTime;

    Time curr, start, final;

    strToTime(currTime, curr.hour, curr.minute, curr.second);
    strToTime(startTime, start.hour, start.minute, start.second);

    final.second = start.second-curr.second;
    if (final.second < 0) {
        final.second += 60;
        start.minute--;
    }

    final.minute = start.minute-curr.minute;
    if (final.minute < 0) {
        final.minute += 60;
        start.hour--;
    }

    final.hour = start.hour-curr.hour;
    if (final.hour < 0)
        final.hour += 24;

    printTime(final);


    return 0;
}