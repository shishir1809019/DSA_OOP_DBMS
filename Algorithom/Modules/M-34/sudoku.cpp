// https://leetcode.com/problems/valid-sudoku/

#include<bits/stdc++.h>
using namespace std;

const int N = 9;
vector<vector<char>> solution_board;

bool solution_found(vector<vector<char>> sudoku_board){
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            if(sudoku_board[i][j] == '.') return false; 
        }
    }
    return true;
}
pair<int, int> get_first_free_cell(vector<vector<char>> sudoku_board){
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            if(sudoku_board[i][j] == '.') return {i,j}; 
        }
    }
    return {-1,-1};
}
vector<char> get_candidates(vector<vector<char>> sudoku_board, pair<int, int> free_cell){
    int row = free_cell.first;
    int col = free_cell.second;

    vector<char> valid_candidates;
    for(char digit = '1'; digit<='9'; digit++){
        bool is_candidate = true;
        //check the row
        for(int j = 0; j<N; j++){
            if(sudoku_board[row][j] == digit){
                is_candidate = false;
            }
        }
        //check the column
        for(int i = 0; i<N; i++){
            if(sudoku_board[i][col] == digit){
                is_candidate = false;
                break;
            }
        }
        //check the sub matrix
        int r = (row/3)*3;
        int c = (col/3)*3;

        for(int i = r; i<r+3; i++){
            for(int j = c; j<c+3; j++){
                if(sudoku_board[i][j] == digit){
                    is_candidate = false;
                    break;
                }
                 
            }
        }
        if(is_candidate) valid_candidates.push_back(digit);
    }
    return valid_candidates;
}


bool backtrack(vector<vector<char>> sudoku_board){
    if(solution_found(sudoku_board)){
        solution_board = sudoku_board;
        return true;
    }
    pair<int, int> free_cell = get_first_free_cell(sudoku_board);
    vector<char> candidates = get_candidates(sudoku_board, free_cell);
    for(char candidate: candidates){
        int row = free_cell.first;
        int col = free_cell.second;
        // add candidate to state
        sudoku_board[row][col] = candidate;

        bool solution_found = backtrack(sudoku_board);
        if(solution_found) return true;
        
        //remove candidate from the state
        sudoku_board[row][col] = '.';
    }
    return false;
}
int main()
{
    vector<vector<char>> sudoku_board(N, vector<char>(N));

    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            cin>>sudoku_board[i][j];
        }
    }
    backtrack(sudoku_board);

    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            cout<<solution_board[i][j];
        }
        cout<<endl;
    }
}