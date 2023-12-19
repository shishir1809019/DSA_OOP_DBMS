#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int N = 50+5;

int H, W, ans,visited[N][N];
char adj_matrix[N][N];
int dx[] = {1, 1, 1, 0, 0, -1, -1, -1};
int dy[] = {1, 0, -1, 1, -1, 1, 0, -1};

bool is_valid(int x, int y) {
    return x >= 0 && x < H && y >= 0 && y < W && !visited[x][y];
}

void dfs(int x, int y, int depth) {
    ans = max(ans, depth);
    visited[x][y] = true;
    for (int i = 0; i < 8; i++) {
        int new_x = x + dx[i];
        int new_y = y + dy[i];
        if (is_valid(new_x, new_y) && adj_matrix[new_x][new_y] == adj_matrix[x][y] + 1) {
            dfs(new_x, new_y, depth + 1);
        }
    }
    visited[x][y] = 0;
}

int main() {
    int case_num = 1;
    cin >> H >> W;
    while (H != 0 && W != 0) {
        memset(visited, 0, sizeof(visited));
        ans = 0;
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                cin >> adj_matrix[i][j];
            }
        }
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                if (adj_matrix[i][j] == 'A') {
                    dfs(i, j, 1);
                }
            }
        }
        cout << "Case " << case_num << ": " << ans << endl;
        case_num++;
        cin >> H >> W;
    }
    return 0;
}
