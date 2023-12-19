#include<bits/stdc++.h>
using namespace std;

bool canAttendMeetings(vector<pair<int, int>>& meetings) {
    sort(meetings.begin(), meetings.end());

    for (int i = 1; i < meetings.size(); i++) {
        if (meetings[i].first < meetings[i - 1].second) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<pair<int, int>> meetings = {
        {0, 30},
        {5, 10},
        {15, 20}
    };

    bool canAttend = canAttendMeetings(meetings);
    cout << boolalpha << canAttend << endl;

    return 0;
}
