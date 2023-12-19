#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
int arr[] = {23, 45, 74};
int n = sizeof(arr)/sizeof(arr[0]); 

bool solution_found(int id, vector<int> state){
    return id == n;
}

vector<int> get_candidates(vector<int> state){
    map<int, int> taken;

    for(int x: state){
        taken[x] = 1;
    }
    vector<int> candidates;
    for(int i = 0; i<n ;i++){
        if(taken.count(arr[i]) == 0){
            candidates.push_back(arr[i]);
        }
    }
    return candidates;
}

void backtrack(int id, vector<int> state){
    if(solution_found(id, state)){
        ans.push_back(state);
        return;
    }
    vector<int> candidates = get_candidates(state);
    for(int candidate: candidates){
        state[id] = candidate;
        backtrack(id+1, state);
        state[id] = 0;
    }

}

int main()
{

    vector<int > initial_state(n);

    backtrack(0, initial_state);

    for(vector<int> permutation: ans){
        for(int x: permutation){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}