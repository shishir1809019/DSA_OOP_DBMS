#include<bits/stdc++.h>
using namespace std;

int minMeetingRooms(vector<pair<int, int>>& meetings) {
    sort(meetings.begin(), meetings.end());

    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(meetings[0].second);

    for (int i = 1; i < meetings.size(); i++) {
        if (meetings[i].first >= minHeap.top()) {
            minHeap.pop();
        }
        minHeap.push(meetings[i].second);
    }

    return minHeap.size();
}

int main() {
    vector<pair<int, int>> meetings = {
        {0, 30},
        {5, 10},
        {15, 20}
    };

    int minRooms = minMeetingRooms(meetings);
    cout << minRooms << endl;

    return 0;
}
