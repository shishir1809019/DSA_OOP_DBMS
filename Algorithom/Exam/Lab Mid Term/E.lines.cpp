#include<bits/stdc++.h>
using namespace std;
const int N = 45;
int n;
int maze[N][N], visited[N][N], level[N][N];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
pair<int, int> start, dst;


bool is_inside(pair<int, int> coordinate){
    int x = coordinate.first;
    int y = coordinate.second;

    if(x>=0 && x<n && y>=0 && y<n){
        return true;
    }
    return false;
}

bool is_safe(pair<int, int> coordinate){
    int x = coordinate.first;
    int y = coordinate.second;

    if(maze[x][y] == -2) return false;
    else return true;
}
void bfs(pair<int, int> src){
    queue<pair<int, int>> q;
    visited[src.first][src.second] = 1;
    q.push(src);
    maze[src.first][src.second] = 0;

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
                maze[new_x][new_y] = maze[x][y]+1;
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

int main()
{
    cin>>n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            level[i][j] = -1;
        }
    }

    for(int i = 0; i<n; i++){
        string input;
        cin>>input;
        for(int j = 0; j<n; j++){
            maze[i][j] = -1;
            if(input[j] == 'O'){
                maze[i][j] = -2;
            }
            else if(input[j] == '@'){
                start = {i,j};
            }
            else if(input[j] == 'X'){
                dst = {i,j};
            }

        }
    }

    bfs(start);

    

    if(visited[dst.first][dst.second] == 0){
        cout<<"N"<<endl;
        return 0;
    }
    cout<<"Y"<<endl;
    int i = dst.first;
	int j = dst.second;
	int cnt = maze[dst.first][dst.second];
	for (int k = 0; k < cnt; k++)
	{
		int tmp_i = i, tmp_j = j;
		if (i > 0 && maze[i - 1][j] == maze[i][j] - 1) i--;
		else
			if (i < n - 1 && maze[i + 1][j] == maze[i][j] - 1) i++;
			else
				if (j > 0 && maze[i][j - 1] == maze[i][j] - 1) j--;
				else
					if (j < n && maze[i][j + 1] == maze[i][j] - 1) j++;
		maze[tmp_i][tmp_j] = -3;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			char c = '.';
			if (maze[i][j] == -2) c = 'O';
			if (maze[i][j] == 0) c = '@';
			if (maze[i][j] == -3) c = '+';
			cout<<c;
		}
		cout<<endl;
	}

} 