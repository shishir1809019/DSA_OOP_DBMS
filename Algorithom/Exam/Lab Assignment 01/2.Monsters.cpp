#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;
int n, m;
int maze[N][N],visited[N][N],level[N][N];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

bool is_inside(pair<int, int> coordinate){
    int x = coordinate.first;
    int y = coordinate.second;

    if(x>=0 && x<n && y>0 && y<m){
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

queue<pair<int ,int>> corner_cell;
void find_corner_floor_cell(){

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(( i == n-1 || i == 0 || j == m-1|| j == 0) && maze[i][j] == 0){
                corner_cell.push({i, j});
            }
        }
    }
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

        for(int i = 0; i<4; i++){
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            pair<int, int> adj_node = {new_x, new_y};
            if(is_inside(adj_node) && is_safe(adj_node) && visited[new_x][new_y] == 0){
                visited[new_x][new_y] = 1;
                level[new_x][new_y] = level[x][y] + 1;
                q.push(adj_node);
            }
        }
    }
}


int main()
{
    cin>>n>>m;
    pair<int, int> A, M;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            level[i][j] = -1;
        }
        cout<<endl;
    }

    for(int i = 0; i<n; i++){
        string input;
        cin>>input;
        for(int j = 0; j<m; j++){
            if(input[j] == '#'){
                maze[i][j] = -1;
            }
            else if(input[j] == 'A'){
                A = {i,j};
            }
            else if(input[j] == 'M'){
                maze[i][j] = -1;
            }
        }
    }



    find_corner_floor_cell();
    bfs(A);
    bool found = false;
    while(!corner_cell.empty()){
        auto x = corner_cell.front();
        if(visited[x.first][x.second] == 1){
            found = true;
            cout<<"YES"<<endl;
            cout<<level[x.first][x.second]<<endl;
        }
        corner_cell.pop();
    }

    if(found == false){
        cout<<"NO"<<endl;
    }

    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<m; j++){
    //         cout<<maze[i][j]<<"\t";
    //     }
    //     cout<<endl;
    // }
    
    return 0;
}