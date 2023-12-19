#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;
int maze[N][N], visited[N][N], level[N][N];
int n, m;

int dx[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };

bool is_inside(pair<int, int> coordinate){
    int x = coordinate.first;
    int y = coordinate.second;

    if(x>=0 && x<8 && y>=0 && y<8){
        return true;
    }
    return false;
}

bool is_safe(pair<int, int> coordinate){
    int x = coordinate.first;
    int y = coordinate.second;

    if(maze[x][y] == -1) return false;
    return true; 
}

void bfs(pair<int, int> src){
    queue<pair<int, int>> q;
    visited[src.first][src.second] = 1;
    q.push(src);
    level[src.first][src.second] = 0;

    while (!q.empty())
    {
        pair<int, int> head = q.front();
        q.pop();
        int x = head.first;
        int y = head.second;
    
        for(int i = 0; i<8; i++){
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            pair<int, int> adj_node = {new_x, new_y};
            if(is_inside(adj_node) && visited[new_x][new_y] == 0){
                visited[new_x][new_y] = 1;
                level[new_x][new_y] = level[x][y] + 1;
                q.push(adj_node);
            }
        }
    }
}

int main()
{
    pair<int, int> src, dst;

    src = {0, 0};
    dst = {3,3};
    for(int i = 0; i<8; i++){
        for(int j = 0; j<8; j++){
            level[i][j] = -1;
        }
    }


    bfs(src);

    if(level[dst.first][dst.second] == -1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<level[dst.first][dst.second]<<endl;
    }
}