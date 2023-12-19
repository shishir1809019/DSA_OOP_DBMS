#include<bits/stdc++.h>
using namespace std;
const long long N = 1e3+5;
long long n, m;
long long maze[N][N], visited[N][N], level[N][N], parent[N][N];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
char dir[] = {'R', 'L', 'U', 'D'};
pair<int, int> src, dst;



bool is_inside(pair<int, int> coordinate){
    int x = coordinate.first;
    int y = coordinate.second;

    if(x>=0 && x<n && y>=0 && y<m){
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

    bool check = false;
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
                parent[new_x][new_y] = i;
                q.push(adj_node);
            }
            if(new_x == dst.first && new_y == dst.second){
                check = true;
                break;
            }
        }
        if(check){
            break;
        }
        
    }
}

// void dfs(pair<int, int> src){
//     int x = src.first, y = src.second;
//     visited[x][y] = 1;

//     for(int i=0;i<4;i++){
       
//     }

// }

int main()
{
    cin>>n>>m;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            parent[i][j] = -1;
        }
    }

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
                src = {i, j};
            }
            else if(input[j] == 'B'){
                dst = {i, j};
            }
        }
    }

    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<m; j++){
    //         cout<<maze[i][j]<<"\t";
    //     }
    //     cout<<endl;
    // }

    bfs(src);

    if(level[dst.first][dst.second] == -1){
        cout<<"NO"<<endl;
        return 0;
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<parent[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    cout<<"YES"<<endl;
    cout<<level[dst.first][dst.second]<<endl;
    int selected_x = dst.first, selected_y = dst.second;
    
    string path = "";
    while (parent[selected_x][selected_y] != -1) {
            int d = parent[selected_x][selected_y];
            path = dir[d] + path;
            selected_x -= dx[d];
            selected_y -= dy[d];
        }
    cout<<path<<endl;

}

/*


5 8
########
#.A#...#
#.##.#B#
#......#
########
*/ 