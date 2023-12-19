#include<bits/stdc++.h>
using namespace std;

struct Circle {
    int x;
    int y;
    int radius;
};

double getDistance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

bool doCirclesOverlap(Circle c1, Circle c2) {
    double distance = getDistance(c1.x, c1.y, c2.x, c2.y);
    return distance <= (c1.radius + c2.radius);
}

void dfs(vector<Circle>& circles, vector<bool>& visited, int currentCircle) {
    visited[currentCircle] = true;

    for (int i = 0; i < circles.size(); i++) {
        if (!visited[i] && doCirclesOverlap(circles[currentCircle], circles[i])) {
            dfs(circles, visited, i);
        }
    }
}

int findCircleGroups(vector<Circle>& circles) {
    int numGroups = 0;
    vector<bool> visited(circles.size(), false);

    for (int i = 0; i < circles.size(); i++) {
        if (!visited[i]) {
            dfs(circles, visited, i);
            numGroups++;
        }
    }

    return numGroups;
}

int main() {
    int n;;
    cin >> n;

    vector<Circle> circles(n);
    for (int i = 0; i < n; i++) {
        cin >> circles[i].x >> circles[i].y >> circles[i].radius;
    }

    int numGroups = findCircleGroups(circles);
    cout << numGroups << endl;

    return 0;
}
