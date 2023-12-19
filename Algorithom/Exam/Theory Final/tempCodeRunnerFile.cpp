bool is_inside(pair<int, int> coordinate){
//     int x = coordinate.first;
//     int y = coordinate.second;

//     if(x>=0 && x<n && y>=0 && y<m){
//         return true;
//     }
//     return false;
// }

// bool is_safe(pair<int, int> coordinate){
//     int x = coordinate.first;
//     int y = coordinate.second;

//     if(maze[x][y] == -1) return false;
//     return true; 
// }

// void bfs(pair<int, int> src){
//     queue<pair<int, int>> q;
//     visited[src.first][src.second] = 1;
//     q.push(src);
//     level[src.first][src.second] = 0;

//     while (!q.empty())
//     {
//         pair<int, int> head = q.front();
//         q.pop();
//         int x = head.first;
//         int y = head.second;
    
//         for(int i = 0; i<4; i++){
//             int new_x = x + dx[i];
//             int new_y = y + dy[i];

//             pair<int, int> adj_node = {new_x, new_y};
//             if(is_inside(adj_node) && visited[new_x][new_y] == 0){
//                 visited[new_x][new_y] = 1;
//                 level[new_x][new_y] = level[x][y] + 1;
//                 q.push(adj_node);
//             }
//         }
//     }
// }